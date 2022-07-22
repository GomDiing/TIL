#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int n;
    int total_Y = 0;
    int total_M = 0;

    scanf("%d",&n);

    int *arr = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i< n; i++) {
        total_Y += 10 + 10 * (arr[i]/30);
        total_M += 15 + 15 * (arr[i]/60);
    }

    if (total_Y < total_M) {
        printf("%c %d",'Y',total_Y);
    }
    else if (total_Y > total_M) {
        printf("%c %d",'M',total_M);
    } else {
        printf("%c %c %d", 'Y', 'M', total_M);
    }

    return 0;
}