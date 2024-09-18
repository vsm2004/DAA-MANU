#include<stdio.h>
int factorial(int a){
	if(a==0 || a==1){
		return 1;
	}else{
		return a*factorial(a-1);
	}
}
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int fact=factorial(n);
	printf("Factorial of %d is: %d\n", n, fact);
}
