#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, m, x, temp, num, result, digit = 0;
    int wrong[10] = {0, };
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; ++i) {
        scanf("%d", &x);
        wrong[x] = 1;
    }
    


    while(temp != 0) {
        temp = temp / 10;
        digit++;
    }

    return 0;
}