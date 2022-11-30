#!/bin/bash

read -p "Enter the no of Employee :" no
sum=0
for (( i=1 ; i<=$no; i++));
do
  read -p "Enter the salary of employee $i is :" a
  sum=$(($sum+$i))
done

echo "Total Salary is $sum"
