// counting_sort
#include<stdio.h>
#include<stdlib.h>

int* counting_sort(int *num, int n, int max);

int main() {

    int num[] = {6,4,7,9,8,5,3,1,2};
    counting_sort(num, sizeof(num) / sizeof(int), 9);

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
        
    return 0;
}

int* counting_sort(int *num, int n, int max) {
    //初始化計數數組
    int *count = (int*)malloc(sizeof(int) * max);

    for (int i = 0; i < max; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[num[i] - 1] ++;
    }
    int index = 0;
    for (int i = 0; i < max; i++) {
        while (count[i] > 0) {
            num[index] = i + 1;
            index++;
            count[i]--;
        }
    }
    return num;
}