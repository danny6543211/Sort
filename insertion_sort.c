// insertion_sort
#include<stdio.h>

int* insertion_sort(int *num, int n);

int main() {
    
    int num[] = {6,4,7,9,8,5,3,1,2};
    insertion_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    
    return 0;
}

int* insertion_sort(int *num, int n) {
    for (int i = 0; i < n; i++) {
        int cur = num[i];
        int j = i - 1;
        while ((j >= 0) && (num[j] > cur)) {
            num[j + 1] = num[j];
            j--; 
        }
        num[j + 1] = cur;
    }
    return num;
}