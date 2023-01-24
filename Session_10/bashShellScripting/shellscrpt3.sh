#!/bin/bash

#echo arguments to the shell

echo $0 $1 $2 $3   ' -> echo $0 $1 $2 $3'

echo $1 $2 $3   " -> echo $1 $2 $3"

echo "Current Working Director: `pwd`"

echo "Current Working Director: ${PWD}"

#storing arguments from bash command line in special array
args=("$@")

echo ${args[0]} ${args[1]} ${args[2]} ${args[3]} '-> ${args[0]} ${args[1]} ${args[2]} ${args[3]}'

echo Number of arguments passed: $#

#use subshell $() to execute shell command
echo $(uname -o)

#execute shell command without subshell
echo `uname -o`

