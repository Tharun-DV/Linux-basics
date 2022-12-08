#include <stdio.h>
#include <string.h>
int main(){
  // Declartion and initilization
  char str[20][50],str1[50];
  int n,i,found=0;
  
  //No of Items in array
  printf("Enter How many Names in List:");
  scanf("%d",&n);

  //Get the items of array
  for (i=0;i<n;i++) {
    printf("Enter the Name:");
    scanf("%s",str[i]);
  }
  
  // prints the items in array
  /* for (i=0;i<n;i++){
    printf("%s\n",str[i]);
  } */
  printf("Enter the Name to Search :");
  scanf("%s",str1);
  for(i=0;i<n;i++){
    if(strcmp(str1,str[i]) == 0) {
      found=1;
      printf("The Entred String in present in list of string!\n");
    }
  }
  if (found==0){
    printf("Entered String is Not in the list of string!\n");
  }
  return 0;
}
