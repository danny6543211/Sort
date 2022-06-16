// *
// merge_sort
#include<stdio.h>

int merge_sort(int r[], int s[], int left, int right);
int merge(int r[], int s[], int left, int mid, int right);
    
int main() {

    int num[] = {6,4,7,9,8,5,3,1,2};

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    merge_sort(num, num, 0, 9);

    for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
        printf("%d ", num[i]);
    }

    return 0;
}


int merge_sort(int r[], int s[], int left, int right)
{
    int mid;
    int t[20];
    if(left == right)
        s[left] = r[right];
    else {
        mid = (left + right) / 2;
        merge_sort(r, t, left, mid);
        merge_sort(r, t, mid + 1, right);
        merge(t, s, left, mid, right);
    }
    return 0;
}

int merge(int r[], int s[], int left, int mid, int right) {
    int i, j, k;
    i = left;
    j = mid+ 1;
    k = left;
    while ((i <= mid) && (j <= right))
        if(r[i] <= r[j]) {
            s[k] = r[i];
            i++;
            k++;
        }
        else {
            s[k]=r[j];
            j++;
            k++;
        }
        while (i <= mid)
            s[k++] = r[i++];
        while (j <= right)
            s[k++] = r[j++];
    return 0;
}
