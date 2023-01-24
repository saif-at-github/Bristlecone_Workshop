#!/bin/bash

# Global vs Local Variable

VAR="global variable"

function myfun {
    local VAR="local variable"
    echo $VAR
}


echo $VAR
myfun

echo $VAR