#include <stdio.h>

long long int arr[400000] = {-1, 0, };

long long int squared(long long int x, long long int y);

int main() {
    long long int a, b, c, result, count = 1, temp;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a == c) result = 0;
    else {
        temp = a;
        while(1) {
            for(int i = 0; i < count; i++) if(arr[i - 1] == temp % c) goto EXIT;
            arr[count - 1] = temp % c;
            printf("arr = %lld\n", arr[count - 1]);
            temp = squared(a, count);
            count++;
            printf("temp = %lld\n", temp);
        }
        EXIT:
            result = arr[b % count - 1];
    }

    printf("%lld", result);

    return 0;
}

long long int squared(long long int x, long long int y) {
    long long int output = x;
    for (int i = 0; i < y; i++) output *= x;
    return output;
}