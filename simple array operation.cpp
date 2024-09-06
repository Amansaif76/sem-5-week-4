#include<stdio.h>
int main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array : \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	int sum =0,max= arr[0],min =arr[0];
	float ave = 0;
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	ave = sum/n;
	printf("\nsum,average,maximum and minimum of array is : %d %f %d %d", sum , ave, max , min);
	
	
}
