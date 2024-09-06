#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the values of array: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elemenrts are: \n");
	for(int i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max = arr[i];
	}
	printf("maximum elements are: %d" ,max);
}
