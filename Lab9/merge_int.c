#include "sortint.h"

void merge(int arr[], int l, int m, int r)
{
    int lenL = m - l + 1;
    int lenR = r - m;
  
    int L[lenL], R[lenR];
  
    for (int i = 0; i < lenL; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < lenR; j++)
        R[j] = arr[m + 1 + j];
  
    int i = 0, j = 0, k = l;
    while (i < lenL && j < lenR) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < lenL) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    while (j < lenR) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void sort(int arr[], int l, int r)
{
    if (l < r) {
        int mid = (l+r) / 2;
  
        sort(arr, l, mid);
        sort(arr, mid + 1, r);
  
        merge(arr, l, mid, r);
    }
}

void merge_int(int data[], int len) {
    sort(data, 0, len - 1);
}