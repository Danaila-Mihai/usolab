#include <stdio.h>
 
#define MAX_LEN 100
 
static void merge(int arr[], int left, int mid, int right) 
{ 
    int i, j, k; 
    int n1 = mid - left + 1; 
    int n2 = right - mid; 
 
    int aux_left[n1], aux_right[n2]; 
 
    for (i = 0; i < n1; i++) 
        aux_left[i] = arr[left + i]; 
    for (j = 0; j < n2; j++) 
        aux_right[j] = arr[mid + 1 + j]; 
 
    i = 0;
    j = 0;
