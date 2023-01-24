#!/bin/bash

directory="../bashShellScripting"

if [ -d $directory ]; then
    echo "Directory exists"
else
    echo "Directoy does not exist"
fi

choice=4
echo "1. Bash"
echo "2. Scripting"
echo "3. Workshop"

echo -n "please choose a word [1,2 or 3]? "

while [ $choice -eq 4 ]; do

read choice
if [ $choice -eq 1 ]; then
    echo "you have choosen word: Bash"
else
    echo "some other choice choosen"
fi
done