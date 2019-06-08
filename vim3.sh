#!/bin/bash

if [ -z $1 ]
then
    echo "must pass name of new program!"
fi

vi tests/test_$1.cpp my_code/$1.h my_code/$1.cpp
