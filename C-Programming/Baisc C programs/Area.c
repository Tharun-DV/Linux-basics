#include<stdio.h>
int main(){
    float a,b,h;
    printf("Enter Base (a) :");
    scanf("%f",&a);
    printf("Enter Base (b) :");
    scanf("%f",&b);
    printf("Enter Height (h) :");
    scanf("%f",&h);
    printf("The Area of Trapizium is (A) : %.2f",((a+b)/2)*h);
    return 0;

}
