// selection_sort
#include<stdio.h>

int* selection_sort(int *num, int n);

int main() {

    int num[] = {6,4,7,9,8,5,3,1,2};
    selection_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
        
    return 0;
}

int* selection_sort(int *num, int n) {
    for (int i = 0; i < n; i++) {
        int min = num[i];
        for (int j = i; j < n; j++) {
            if (num[j] < min) {
                int temp = num[j];
                num[j] = min;
                min = temp;
            }
        num[i] = min;
        }
    }
    return num;   
}