#!/bin/bash

if [ -z $1 ]
then
    echo "must pass name of new program!"
fi

cp tests/test_hello.cpp tests/test_$1.cpp
git add tests/test_$1.cpp
cp my_code/hello.cpp my_code/$1.cpp
git add my_code/$1.cpp
cp my_code/hello.h my_code/$1.h
git add my_code/$1.h
vim3.sh $1
