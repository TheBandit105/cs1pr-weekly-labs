#!/bin/bash

 cat animals.txt | sort -k3 -rn -t ","| cut -d "," -f 1,2| head -n1
