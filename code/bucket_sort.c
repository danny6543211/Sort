// *
// bucket_sort
#include <stdio.h>
#include <stdlib.h>

int* bucket_sort(int *num, int n);
int get_max_val(int* arr, int len);

int main() {
    
    int num[] = {6,4,7,9,8,5,3,1,2};
    
    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    bucket_sort(num, sizeof(num) / sizeof(int));

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

int get_max_val(int* arr, int len)
{
    
    int max_val = arr[0]; 
    
    for(int i = 1; i < len; i++) 
    {
        if(arr[i] > max_val)
            max_val = arr[i];
    }
    
    return max_val; 
}
 
int* bucket_sort(int* num, int n)
{
    int tmp_arr_len = get_max_val(num, n) + 1;
    int tmp_arr[tmp_arr_len];  
    int i, j;
    
    for( i = 0; i < tmp_arr_len; i++) 
        tmp_arr[i] = 0;
    
    for(i = 0; i < n; i++)   
        tmp_arr[num[i]]++;
    
    for(i = 0, j = 0; i < tmp_arr_len; i ++)
    {
        while (tmp_arr[i] != 0) 
        {
            num[j] = i;  
            j++;
            tmp_arr[i]--;
        }
    }
}
