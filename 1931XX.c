#include <stdio.h>

int start[100001] = {0, };
int end[1000001] = {0, };

void merge(int l, int m, int r);
void mergeSort(int l, int r);
void printArray(int A[], int size);

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &start[i], &end[i]);
    }
    mergeSort(0, n - 1);
    printArray(start, n);
    printArray(end, n);
    
    return 0;
}

void merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    /* create temp arrays */
    int L[n1], R[n2];
    int L2[n1], R2[n2];
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = end[l + i];
        L2[i] = start[l + i];
    for (j = 0; j < n2; j++)
        R[j] = end[m + 1 + j];
        R2[j] = start[m + 1 + j];
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            end[k] = L[i];
            start[k] = L2[i];
            i++;
        }
        else {
            end[k] = R[j];
            start[k] = R2[j];
            j++;
        }
        k++;
    }
  
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        end[k] = L[i];
        start[k] = L2[i];
        i++;
        k++;
    }
  
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        end[k] = R[j];
        start[k] = R2[j];
        j++;
        k++;
    }
}
  
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
  
        // Sort first and second halves
        mergeSort(l, m);
        mergeSort(m + 1, r);
  
        merge(l, m, r);
    }
}
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}