#!/bin/bash
for src in ./*.c*; do
  exc=${src%%.c*}
  g++ -Wall -g -lm $src -o $exc
  chmod +x $exc
  echo Compiled "'${src}'" to "'${exc}'"
done
