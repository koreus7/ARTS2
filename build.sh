#!/bin/sh

LDFLAGS="$LDFLAGS -lm -lpthread"
CFLAGS="$CFLAGS -g -pedantic -I src"

gcc $CFLAGS -o sampler.bin src/sampler.c $LDFLAGS
