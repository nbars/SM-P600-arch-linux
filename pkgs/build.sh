#!/bin/bash

readonly out_dir=./out

usage() {
  echo $0 all
  echo $0 list [package...]
  echo $0 clean
}

err() {
  echo "ERROR:$1"
  exit 1
}

build_package() {
  local readonly package_name="$1"
  (
    echo "Building $package_name"
    cd "$package_name"
    makepkg -d -c -f || err "Failed to build package $package_name"
    mv *.pkg.tar.xz ../out
  )
}

build_all() {
  for p in $(ls .)
  do
    if [[ ! -f "$p/PKGBUILD" ]]; then
      continue
    fi
    build_package "$p" || err "Failed!"
  done
}

clean_tmp() {
  echo "Cleaning..."
  rm -rf */src
  rm -rf */pkg
  rm -f */*pkg.tar.xz
}


mkdir -p out
export BUILD_TYPE=develop
export CROSS_COMPILE="$PWD/../toolchains/arm-eabi-4.8/bin/arm-eabi-"

if [[ $# -le 0 ]]; then
  echo "Not enough arguments!"
  usage
  exit 1
fi

case "$1" in
  all)
  build_all
    ;;
  list)
  shift
  build_package "$1"
    ;;
  clean)
  clean_tmp
    ;;
esac
