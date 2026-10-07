# build-canary

A deliberately vulnerable C parser with a ClusterFuzzLite layout. build.gcb.io uses it to test
the attach, build and fuzz path end to end: `fuzz_parse` must find a heap-buffer-overflow
quickly, `fuzz_clean` must not crash. Do not use this code for anything else.
