#include<stdio.h>
int main(){
	int a,b,i,j;
	int a1[3][3];
	int a2[3][3];
	int a3[3][3];
	printf("enter the size of array: ");
	scanf("%d %d ",&a,&b);

	printf("enter the elements of arrays:");
	for( i=0;i<a;i++){
		for( j=0;j<b;j++){
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	for( i=0;i<a;i++){
		for( j=0;j<b;j++){
			scanf("%d",&a2[i][j]);
		}
		printf("\n");
	}

	for( i=0;i<a;i++){
		for( j=0;j<b;j++){
			a3[i][j] = a1[i][j] + a2[i][j];
		}
	}
	printf("sum of two arrays is:");
	for( i=0;i<a;i++){
		for( j=0;j<b;j++){
			printf("%d",a3[i][j]);
		}
		printf("\n");
	}
	
}
