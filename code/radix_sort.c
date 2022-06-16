// *
// 基數排序
#include<stdio.h>
#define MAX 20
#define BASE 10

void radix_sort(int *a, int n);

int main() {
    
    int num[] = {6,4,7,9,8,5,3,1,2};
    
    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    radix_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    return 0;
}

void radix_sort(int *num, int n) {
   
    int i, b[MAX], m = num[0], exp = 1;

    for (i = 1; i < n; i++) {
        if (num[i] > m) {
            m = num[i];
        }
    }

    while (m / exp > 0) {
        int bucket[BASE] = { 0 };
  
        for (i = 0; i < n; i++) {
            bucket[(num[i] / exp) % BASE]++;
        }

        for (i = 1; i < BASE; i++) {
            bucket[i] += bucket[i - 1];
        }

        for (i = n - 1; i >= 0; i--) {
            b[--bucket[(num[i] / exp) % BASE]] = num[i];
        }

        for (i = 0; i < n; i++) {
            num[i] = b[i];
        }

        exp *= BASE;

    }
}