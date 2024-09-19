#include<stdio.h>
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int i,c=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c>2){
		printf("The number %d is a composite number",n);
	}else{
		printf("The number %d is a prime number",n);
	}
}
