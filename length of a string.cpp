#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    length = strlen(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
