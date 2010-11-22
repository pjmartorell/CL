#!/bin/bash
echo "################## Comparant pjp$1 amb sjp$1 ##################"
make
if [ $? -eq 0 ]; then
	./cl execute < jp$1 > pjp$1 
	opendiff sjp$1 pjp$1 &
else
echo "##################  S'han produït errors de compilació  ##################"
fi
exit 0