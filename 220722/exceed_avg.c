/*
평균은 넘겠지?

[문제]
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다.
당신은 그들에게 슬픈 진실을 알려줘야 한다.

[입력]
첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고,
이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

[출력]
각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.

[예제입력]
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

[예제출력]
40.000%
57.143%
33.333%
66.667%
55.556%
*/


#include <stdio.h>
#include <stdlib.h>

/*
double cal_avg();

int main() {
    int test_case;

    scanf("%d",&test_case);

    double* arr = (double*)malloc(sizeof(double) * test_case);

    for (int i = 0; i < test_case; i++) {
        arr[i] = cal_avg();
    }

    for (int i = 0; i < test_case; i++) {
        printf("%f\n", arr[i]);
    }
}

double cal_avg() {
    int n;
    int cnt = 0;
    double total = 0, avg = 0;

    scanf("%d", &n);

    int* score = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
        total += score[i];
    }

    avg = (double)total / n;

    for (int i = 0; i < n; i++) {
        if (score[i] > avg) {
            cnt++;
        }
    }

    free(score);
    
    return (double)cnt / n * 100;
}
*/

#include <stdio.h>
#include <stdlib.h>

double over_rate();

int main() {
    int test_case;

    scanf("%d",&test_case);
    
    double* rate = (double*)malloc(sizeof(double) * test_case);

    for (int i = 0; i < test_case; i++) {
        rate[i] = over_rate();
    }

    for (int i = 0; i < test_case; i++) {
        printf("%.2f%%\n",rate[i]);
    }

    free(rate);

    return 0;
}

double over_rate() {
    int n_grade;
    int total = 0, cnt = 0;
    double avg;

    scanf("%d", &n_grade);

    int* score = (int*)malloc(sizeof(int) * n_grade);

    for (int i = 0; i < n_grade; i++) {
        scanf("%d", &score[i]);
        total += score[i];
    }

    avg = (double)total / n_grade;

    for (int i = 0; i < n_grade; i++) {
        if (score[i] > avg) {
            cnt++;
        }
    }

    return (double)cnt / n_grade * 100;
}