// shell_sort
#include<stdio.h>

int* shell_sort(int *num, int n);

int main() {

    int num[] = {6,4,7,9,8,5,3,1,2};
    shell_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
        
    return 0;
}

int* shell_sort(int *num, int n) {
    
}