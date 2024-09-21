#include<stdio.h>
#include<string.h>
int main(){
	char s1[50];
	printf("enter the string: ");
	scanf("%s",s1);
	char s2[50];
	int l=strlen(s1);
	for(int i=0;i<l;i++){
		s2[i]=s1[i];
	}
	printf("%s",s2);
}
