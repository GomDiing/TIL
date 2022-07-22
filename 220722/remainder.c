/*
문제

두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다.
예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.
수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다.
그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

입력
첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

출력
첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.

예제 입력 1
1
2
3
4
5
6
7
8
9
10

예제 출력 1
10

각 수를 42로 나눈 나머지는 1, 2, 3, 4, 5, 6, 7, 8, 9, 10이다.

예제 입력 2
42
84
252
420
840
126
42
84
420
126

예제 출력 2
1

모든 수를 42로 나눈 나머지는 0이다.

예제 입력 3
39
40
41
42
43
44
82
83
84
85

예제 출력 3
6

각 수를 42로 나눈 나머지는 39, 40, 41, 0, 1, 2, 40, 41, 0, 1이다. 서로 다른 값은 6개가 있다.
*/

#include <stdio.h>

int main()
{
    /*
    int n = 10;             // 입력받을 숫자의 개수
    int arr[10];            // 입력받을 수를 저장한 배열
    int remainder[10];      // 입력받은 수를 42로 나눈 나머지를 저장한 배열
    int dupli[10];          // 중복된 나머지를 저장할 배열
    int cnt = 0;            // 중복된 나머지 개수
    int pos = 0;            // 중복된 나머지 확인할때 위치

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        remainder[i] = arr[i] % 42;
    }

    dupli[cnt] = remainder[0];
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < cnt+1; j++) {
            // printf("%d\n",j);
            if (dupli[j] != remainder[i]) {
                // printf("dupli[j]: %d, remainder[i]: %d\n", j, i);
                pos++;
            }
        }
        // printf("count : %d\n",pos);
        if (pos > cnt) {
            dupli[++cnt] = remainder[i];
        }
        pos = 0;
    }

    printf("%d", ++cnt);
    */
    int arr[42] = {0, };
    int n = 10;
    int cnt = 0;
    int x;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d",&x);
        arr[x % 42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        if (arr[i] == 1)    cnt++;
    }

    printf("%d\n",cnt);
}