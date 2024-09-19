#include<stdio.h>
int main() {
    int num[] = {12, 4, 19, 32, 18, 26, 40, 21, 17};
    int size = sizeof(num) / sizeof(num[0]);
    int i, j, minIndex, temp;
    for(i = 0; i < size - 1; i++) {
        minIndex = i;  
        for(j = i + 1; j < size; j++) {
            if(num[j] < num[minIndex]) {
                minIndex = j; 
            }
        }
        temp = num[minIndex];
        num[minIndex] = num[i];
        num[i] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

