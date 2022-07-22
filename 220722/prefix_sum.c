#include <stdio.h>
/* 
구간합 사용하지않고 표현
int arr[100001];
int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a = 0, b = 0;
    long long sum = 0;
    while(x) {
        scanf("%d %d", &a, &b);
        for (int i = a-1; i < b; i++) {
            sum += arr[i];
        }
        printf("%lld\n", sum);
        sum = 0;
        x--;
    }
} */

// 구간합(Prefix Sum)으로 표현
int arr[100001];
long long sum_arr[100001];

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) {
            sum_arr[i] = arr[i];
        } else {
            sum_arr[i] = sum_arr[i-1] + arr[i];
        }
    }

    int a = 0, b = 0;
    long long sum = 0;
    while(x) {
        scanf("%d %d", &a, &b);
        printf("%lld\n", sum_arr[b-1] - sum_arr[a-2]);
        x--;
    }

    return 0;
}