// *
// heap_sort
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void max_heapify(int *num, int start, int end);
void heap_sort(int *num, int n);

int main() {
    
    int num[] = {6,4,7,9,8,5,3,1,2};
    
    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    heap_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void max_heapify(int *num, int start, int end) {

    int dad = start;
    int son = dad * 2 + 1;
    while (son <= end) {
        if (son + 1 <= end && num[son] < num[son + 1]) 
            son++;
        if (num[dad] > num[son]) 
            return;
        else { 
            swap(&num[dad], &num[son]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}

void heap_sort(int *num, int n) {
    int i;

    for (i = n / 2 - 1; i >= 0; i--)
        max_heapify(num, i, n - 1);

    for (i = n - 1; i > 0; i--) {
        swap(&num[0], &num[i]);
        max_heapify(num, 0, i - 1);
    }
}