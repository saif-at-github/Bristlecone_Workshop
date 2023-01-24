#!/bin/bash

#input a string
echo -e "Hi, please type your name: \c "
read word

echo "Hello $word, how are you?"

#multiple srting inputs
read -a colors
echo "${colors[0]} ${colors[1]} ${colors[2]}"


directory="../bashShellScripting"

if [ -d $directory ]; then
    echo "Directory exists"
else
    echo "Directoy does not exist"
fi
