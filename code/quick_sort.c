// *
// quick_sort
#include<stdio.h>

int* quick_sort(int *num, int low, int high);

int main() {

    int num[] = {6,4,7,9,8,5,3,1,2};

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    quick_sort(num, 0, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
        
    return 0;
}


int* quick_sort(int *arr, int low, int high)
{
    if (low < high) {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j) {
            while(i < j && arr[j] >= k) {
                j--;
            }
 
            if(i < j) {
                arr[i++] = arr[j];
            }
 
            while(i < j && arr[i] < k) {
                i++;
            }
 
            if(i < j) {
                arr[j--] = arr[i];
            }
        }
 
        arr[i] = k;
 
        quick_sort(arr, low, i - 1);   
        quick_sort(arr, i + 1, high);   
    }
}
