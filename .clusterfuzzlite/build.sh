#!/bin/bash -eu
$CC $CFLAGS -c src/parse.c -o parse.o
for f in fuzz_parse fuzz_clean; do
  $CC $CFLAGS -c src/$f.c -o $f.o
  $CXX $CXXFLAGS $LIB_FUZZING_ENGINE $f.o parse.o -o $OUT/$f
done
