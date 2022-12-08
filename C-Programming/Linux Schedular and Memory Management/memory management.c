#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,*ptr,sum=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Sorry! unable to allocate memory");
		exit(0);
	}
	for (i=0;i<n;++i){
		printf("Enter elements of array:");
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d\n",sum);
	free(ptr);
	return 0;
}
