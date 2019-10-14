#!/bin/bash

n=$1
a=1
b=1

echo -n 0
for I in $(seq 1 $n) ; do
  echo -n ",$a"

  #let temp=($a + $b)
  temp=$(($a+$b))
  a=$b
  b=$temp
done
echo

0,1,1,2,3,5,8,13,21,34,55
