{ lib
, stdenv
, fetchurl
, glibc
, runtimeShell
, nrf_command_line_tools_version ? "10.21.0"
, nrf_command_line_tools_hash ? "sha256-yjJWB2uhB0QmysZ1/YoU6VxNJC/Mr8b8yLNqQnfLkkk="
}:

stdenv.mkDerivation rec {
  pname = "nrf-command-line-tools";
  version = nrf_command_line_tools_version;

  src = fetchurl {
    url = let
      split_ver = lib.splitVersion nrf_command_line_tools_version;
      # 10-x-x
      maj_version = "${lib.elemAt split_ver 0}-x-x";
      # 10-21-0
      dash_case = lib.concatStringsSep "-" split_ver;
    in
      "https://nsscprodmedia.blob.core.windows.net/prod/software-and-other-downloads/desktop-software/nrf-command-line-tools/sw/versions-${maj_version}/${dash_case}/nrf-command-line-tools-${nrf_command_line_tools_version}_linux-amd64.tar.gz";
    hash = nrf_command_line_tools_hash;
  };

  dontConfigure = true;
  dontBuild = true;
  dontPatchELF = true;
  dontStrip = true;

  installPhase = ''
    mkdir -p $out/
    cp -r * $out
  '';

  preFixup = ''
    find $out -type f | while read f; do
      patchelf "$f" > /dev/null 2>&1 || continue
      patchelf --set-interpreter $(cat ${stdenv.cc}/nix-support/dynamic-linker) "$f" || true
      patchelf --set-rpath ${lib.makeLibraryPath [ 
        "$out" stdenv.cc.cc glibc
      ]} "$f" || true
    done
  '';

  meta = {
  };
}
