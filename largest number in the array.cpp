#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("enter the size: ");
	scanf("%d",&n);
	int num[n];
	int temp;
	printf("enter the numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(j=0;j<n;j++){
		for(k=j+1;k<n;k++){
			if(num[j]>num[k]){
				temp=num[j];
				num[j]=num[k];
				num[k]=temp;
			}
		}
	}
	printf("The largest number in the array is: %d",num[n-1]);
	return 0;
}
