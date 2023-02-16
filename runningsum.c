//WAP to get a no of array values and and display another array of running sum of array.

#include<stdio.h>
#include<stdlib.h>
int* runningsum(int size,int*a);

int main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int *ptr= (int *)malloc(n*sizeof(int));
	int *ans= (int *)malloc(n*sizeof(int));
	printf("enter the elemetns :");
	for(int i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	ans=runningsum(n,ptr);
	for(int i=0;i<n;i++){
		printf("%d",*(ans+i));
	}
	free(ptr);
	free(ans);
	return 0;
	
}

int* runningsum(int size,int *a){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=a[i];
		a[i]=sum;
	}
	return a;
	
}