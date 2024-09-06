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
	int temp;
	for(int i=0;i<n;i++){
		temp=0;
		for(int j=0;j<n-i;j++){
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	
	}
	printf("sorted array elemenrts are: \n");
	for(int i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
} 

