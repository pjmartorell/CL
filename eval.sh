#!/bin/bash
make 
echo "Comparant pjp$1 amb sjp$1"
./cl execute < jp$1 > pjp$1 
opendiff sjp$1 pjp$1 &
exit 0