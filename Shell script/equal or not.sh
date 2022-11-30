#!/bin/bash

read -p "Enter No1:" a
read -p "Enter No2:" b

if (($a==$b));
then
  echo $a is equal to $b
else
  echo "$a is not equal to $b"
fi
