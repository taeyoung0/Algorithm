/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

float py(int n)
{
	float a;
	a = n * 3.305785;
	return a;
}
void swap(int *a,int *b)
{
	
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void sum_avg(int *t, int size)
{
	float avg;
	int sum =0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + t[i];
	}
	avg = (float)sum / size;

	printf("%d\n", sum);
	printf("%f\n", avg);
}

void hop(int* t, int size)
{
	float a[5];
	
	for (int i = 0; i < size; i++)
	{
		a[i] = t[i] * 0.18039;
		printf("%f\n", a[i]);
	}
}

// 배열을 포인터 매개변수로 받는 함수
void hop2(int(*b)[2])
{
	int a[5][2];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++) 
		{
			b[i][j] = b[i][j] * 2;
			//printf("%d\n", a[i][j]);
		}
	}
}

// 배열을 배열 매개변수로 받는 함수 위와 같은거임
void hop3(int b[][2])
{
	int a[5][2];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			b[i][j] = b[i][j] * 2;
			//printf("%d\n", a[i][j]);
		}
	}
}
*/
//main()
//{
	/*int n;
	float o;
	scanf_s("%d", &n);
	o = py(n);
	printf("%f", o);*/
	
	/*int a = 2;
	int b = 3;
	swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	
	
	int t[5];
	int size = sizeof(t) / sizeof(int);

	for(int i =0; i <size; i++)
	scanf_s("%d", &t[i]);

	sum_avg(&t,size);
	hop(&t, size);*/

	// 2차원 배열
	/*int b[5][2] = {1,2,3,4,5,6,7,8,9,10};
	hop3(b);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d\n", b[i][j]);				// 매개변수를 포인터로 받나 배열로 받나 값이 바뀐다는 것을 확인
		}
	}*/
//}