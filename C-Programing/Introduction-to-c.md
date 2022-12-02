# INTRODUCTION TO C PROGRAMMING

## Program to print a string

```c
#include<stdio.h>
int main(){
    printf("Hello world!");
    return 0;
}
```

## Program to Arthimatic Operations

```c
#include<stdio.h>
int main(){
    int Num1,Num2;
    Num1=100;
    Num2=50;
    printf("Addtion of %d and %d is %d\n", Num1,Num2,Num1+Num2);
    printf("Subtraction of %d and %d is %d\n", Num1,Num2,Num1-Num2);
    printf("Multiplication of %d and %d is %d\n", Num1,Num2,Num1*Num2);
    printf("Division of %d and %d is %d\n",Num1,Num2,Num1/Num2);
    printf("Modulus of %d and %d is %d",Num1,Num2,Num1%Num2); 
    return 0;
}
```
## Program to get your name and print the same
```c
#include<stdio.h>
int main(){
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("your name is %s\n",name);
    return 0;
}
```

## Program to Get Age as Input and check its major or not

```c
#include<stdio.h>
int main(){
    int No;
    printf("Enter Your Age:");
    scanf("%d",&No);
    if (No>=18){
        printf("You are a major!\n");
    }
    else if(No<18){
        printf("You are not a major!\n");
    }
    return 0;
}
```

## Program Get user age check wheather he is a adult , young or Teenager

```c
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age<=18 && age>=12){
        printf("You are a Teenager!\n");
    }
    else if(age>=18) {
        printf("You are a adult!\n");
    }
    else{
        printf("You are young\n");
    }
}
```

## Program to find Area of Trapizium

```c
#include<stdio.h>
int main(){
    int a,b,h;
    printf("Enter Base (a) :");
    scanf("%d",&a);
    printf("Enter Base (b) :");
    scanf("%d",&b);
    printf("Enter Height (h) :");
    scanf("%d",&h);
    printf("The Area of Trapizium is (A) : %d",((a+b)/2)*h);
    return 0;
}
```

## Program to find a string is present in a list of String or Not

```c
#include<stdio.h>
#include<string.h>
int main()
{ 
    char str[20][50],str1[50];
    int i,no,found=0;
    
    printf("Enter of No of Names in the list:");
    scanf("%d",&no);

    for (i=0;i<no;i++){
        printf("Enter String:");
        scanf("%s",str[i]);
    }
    
    /*
    To display the list
    i=0;
    while (i<no){
        printf("%s\n",str[i]);
        i++;
    }
    */
   printf("Enter the string to search in the list:");
   scanf("%s",&str1);
    for (i=0;i<no;i++) {
        if(strcmp(str1,str[i])==0){
            printf("The Enter String is present in the List!\n");
            found=1;
        }
    }

if (found==0) {
    printf("The Entered String is not present in the list!\n");
}
    return 0;
}
```

