#include<stdio.h>
#include<stdlib.h>
int main()
{
 	int n,i,sum=0;
 	
 	printf("enter no of elements \n");
 	scanf("%d",&n);
 	int* ptr= (int*) calloc(n,sizeof(int));
 	printf("accept  elemnts for array");
 	for(i=0;i<n;i++){
 		scanf("%d",(ptr+i));
	 }
 	
 	for(i=0;i<n;i++){
 		sum=sum+*(ptr+i);
	 }
 	
 	printf("summation=%d\n",sum);
 	free(ptr);
 }
