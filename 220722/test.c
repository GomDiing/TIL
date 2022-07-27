#include <stdio.h>
#include <stdlib.h>
// 입력 받은 양의 정수 만큼 배열을 생성하고 난수를 발생 

void Array_Sorting(int, int *);
void Array_Rotate(int, int, int *);

int main()
{
	int k, j;

	printf("Input k: ");
	scanf("%d", &k);

	// 메모리 할당을 동적으로 변경
	//int array[k];
	int *array = malloc(sizeof(int) * k);
    Array_Sorting(k, array);

	
	// 오름 차순으로 정렬한 값 출력
	printf("Array: [");
	for (int i = 0; i < k; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\b\b");
	printf("]\n");

	// 양의 정수 입력 받기 : 오른쪽 로테이션 범위 입력
	printf("Input j: ");
	scanf("%d", &j);

	Array_Rotate(k, j, array);

	free(array);
	return 0;
}

void Array_Sorting(int k, int *array) {
// 입력 갯수 만큼 배열에 난수 생성하기, 값이 너무 커지는 걸 막기 위해 10 보다 작은수로 만듬
	for (int i = 0; i < k; i++)
	{
		array[i] = (rand() % 10) + 1;
		printf("%d ", array[i]);
	}
	printf("\n");

	// 난수를 오름 차순으로 정렬
	int tmp = 0;
	for (int i = 0; i < k-1; i++)
	{
		for (int j = i+1; j < k; j++)
        {
            printf("compare i-array[%2d]:%2d <-> j-array[%2d]:%2d\n",i,array[i],j,array[j]);
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
        printf("\n\n");
	}
} 

void Array_Rotate(int k, int j, int *array)
{
	// 오른쪽 로테이션
	printf("%d Rotation: [", j);
	for (int cnt = 0; cnt < j; cnt++)
	{
		int r_tmp = 0;
		for (int i = k - 1; i >= 1; i--)
		{
			r_tmp = array[i - 1];
			array[i - 1] = array[i];
			array[i] = r_tmp;
		}
	}

	// 오른쪽 로테이션 결과 출력
	for (int i = 0; i < k; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\b\b");
	printf("]\n");
}