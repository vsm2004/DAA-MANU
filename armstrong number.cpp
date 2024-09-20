#include<stdio.h>
#include<math.h>
int main() {
    int n, c = 0, k, j, new_num = 0, m;  
    printf("Enter the number: ");
    scanf("%d", &n);
    k = n;
    j = k;
    while(n != 0) {
        c++;
        n = n / 10;
    }
    n = k;
    while(n != 0) {
        m = n % 10;
        new_num = new_num + pow(m, c);
        n = n / 10;
    }
    if(new_num == j) {
        printf("The number %d is an Armstrong number.\n", j);
    } else {
        printf("The number %d isn't an Armstrong number.\n", j);
    }
    return 0;
}

