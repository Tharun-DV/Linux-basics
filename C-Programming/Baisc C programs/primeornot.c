#include <stdio.h>
int main ()
{
  int a,i;
  int flag=0;
  printf("Enter a Number to Check Prime or Not:");
  scanf("%d",&a);
  for (i=2;i<a;i++){
    if (a%i==0){
      flag=1;
    }
  }
  if (flag==0){
    printf("The Entered Number %d is Prime Number\n",a);
  }
else{
    printf("The Entered Number %d is Composite Number\n",a);
  }
  return 0;
}
