// bubble_sort
#include<stdio.h>

int* bubble_sort(int *num, int n);

int main() {
    
    int num[] = {6,4,7,9,8,5,3,1,2};
    bubble_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    
    return 0;
}

int* bubble_sort(int *num, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    return num;
}