#!/bin/bash
gcc -o naive naive.c | ./naive 10 1000 100
gcc -o binary binary.c | ./binary 10 1000 100
