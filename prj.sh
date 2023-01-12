#!/bin/bash
# This bash script is used to creat a new project.
# Usage: `./prj.sh <NewProjectName>`
nprj () {
    mkdir "./$1"
    cp ./Demo/Makefile "./$1"
}

nprj "$1"
echo "The new project in $1 has been created."
