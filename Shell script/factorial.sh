#!/bin/bash

read -p "Enter a Number:" a
b=1
while (($a>1));
do
  b=$(($a*$b))
  ((--a))
done

echo "factorial of $a id $b"
