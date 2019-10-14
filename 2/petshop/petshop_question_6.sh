#!/bin/bash

$ cat animals.txt| grep "Cat"| sort -k3 -n -t ","| cut -d "," -f 1,3
