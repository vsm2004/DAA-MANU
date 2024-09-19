#include<stdio.h>
int main() {
    int num[] = {12, 4, 19, 32, 18, 26, 40, 21, 17};
    int size = sizeof(num) / sizeof(num[0]);
    int temp, i, j;
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}

