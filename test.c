#include <stdio.h>

int main() {
    int arr[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    printf("%d\n", arr[-1][2]);
    int arr2[3] = {1, 2, 3};
    printf("%d\n", arr2[-1]);
}
