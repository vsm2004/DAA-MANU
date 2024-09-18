#include<stdio.h>
int main(){
	int a,b;
	int c=0,k;
	printf("enter the two numbers: ");
	scanf("%d%d",&a,&b);
	int i,j;
	for(i=1;(i<a)&&(i<b);i++){
		if((a%i==0)&&(b%i==0)){
			c++;
		}
	}
	int arr[c];
		for(j=1;((j<a)&&(j<b));j++){
		if((a%j==0)&&(b%j==0)){
			for(k=0;k<c;k++){
				arr[k]={j};
			}
		}
	}
	printf("%d",arr[c-1]);
	return 0;
}
