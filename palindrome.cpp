#include <stdio.h>
#include <string.h>
int main() {
    char s[50] ;
	printf("enter the string: ");
	scanf("%s",&s); 
    int l = strlen(s);
    char n[100]; 
    int i, j = 0;  
    for (i = l - 1; i >= 0; i--) {
        n[j++] = s[i]; 
    }
    n[j] = '\0'; 
    if (strcmp(n, s) == 0) {
        printf("%s is a palindrome\n", s);
    } else {
        printf("%s isn't a palindrome\n", s);
    }
    return 0;
}

