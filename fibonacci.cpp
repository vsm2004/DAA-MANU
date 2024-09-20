#include<stdio.h>
void fibonacci(int a, int b, int n, int i) {
    if (i >= n) {
        return;
    }
    int c = a + b;
    printf("%d\n", c);
    fibonacci(b, c, n, i + 1);
}
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    printf("0\n"); 
    if (n > 1) {
        printf("1\n");  
        fibonacci(0, 1, n, 2); 
    }    
    return 0;
}

