#include<stdio.h>
int main() {
    int num[] = {12, 4, 19, 32, 18, 26, 40, 21, 17};
    int size = sizeof(num) / sizeof(num[0]);
    int key, i, j;
    int temp;
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Enter the value to be searched: ");
    scanf("%d", &key);
    int low = 0;
    int high = size - 1;
    int mid;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(key == num[mid]) {
            printf("The number is found at index %d\n", mid);
            found = 1;  
            break;
        }
        else if(key > num[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(!found) {
        printf("The number isn't found\n");
    }
    return 0;
}
