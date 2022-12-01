#include<stdio.h>
int main()
{   
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age<=18 && age>=12) {
        printf("You are Teenager");
    }
    else if(age>18){
        printf("You are adult");
    }
    else{
        printf("You are Young");
    }
    return 0;
}