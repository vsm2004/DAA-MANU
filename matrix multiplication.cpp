#include<stdio.h>
int main() {
    int r1, r2, c1, c2;
    int i, j, k;
    printf("Enter the rows and columns of matrix 1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the rows and columns of matrix 2: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication is not possible because c1 != r2.\n");
        return 0;
    }
    int arr1[r1][c1];
    int arr2[r2][c2];
    int prod[r1][c2]; 
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter the value of arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter the value of arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            prod[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                prod[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Product of the matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}

