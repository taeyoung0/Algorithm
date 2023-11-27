#include<stdio.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

main()
{
	// 10개의 숫자를 입력받아 배열에 저장한 후 오름차순으로 정렬
	/*int a[10];
	int key = 0;

	for (int i = 0; i < 10; ++i)
	{
		printf("정수를 입력해주세요 : ");
		scanf_s("%d", &a[i]);
	}

	for (int i = 1; i < 10; ++i)
	{
		key = a[i];

		for (int j = i - 1; j >= 0; --j)
		{
			if (key < a[j])
			{
				a[j + 1] = a[j];
			}
			else
			{
				break;
			}
			a[j] = key;
		}

	}
	for (int x = 0; x < 10; x++)
		printf("%d", a[x]);*/


		// 점수 석차
		/*int a[10] = {0,40,50,90,80,70,60,70,80,90};
		int rank[10];
		int i = 0;
		int j = 0;

		for (int x = 0; x < 10; x++)
		{
			rank[x] = 1;
		}
		do
		{
			i = i + 1;
			j = 0;
			do
			{
				j = j + 1;

				if (a[i] < a[j])
				{
					rank[i] =rank[i] + 1;
				}
			} while (j < 9);
		} while (i < 9);

		for (int i = 0; i < 10; i++)
		{
			printf("%d", a[i]);
			printf("\n");
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d", rank[i]);
		}
		int a[10] = { 0, 40, 50, 90, 80, 70, 60, 70, 80, 90 };
		int rank[10];

		for (int x = 0; x < 10; x++) {
			rank[x] = 1;
		}

		int i = 0;
		do {
			int j = 0;
			do {
				if (a[i] < a[j]) {
					rank[i]++;
				}
				j++;
			} while (j < 10);
			i++;
		} while (i < 10);

		printf("Numbers:\n");
		for (int i = 0; i < 10; i++) {
			printf("%d\n", a[i]);
		}

		printf("Ranks:\n");
		for (int i = 0; i < 10; i++) {
			printf("%d\n", rank[i]);
		}*/

		// 5x5 2차원배열로 나타내기
		/*int a[5][5];
		int i = 0;
		int j = 0;
		int num = 1;
		for (i = 0; i < 5; i++)

			for (j = 0; j < 5; j++)
			{
				a[i][j] = num;
				num = num + 1;
			}
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				printf("%3d", a[i][j]);

			}
			printf("\n");
		}*/

		// 약간 다르게 해봄

		/*int a[5][5] = {0};
		int k = 1;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				a[i][j] = k;
				k = k + 1;
			}
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				printf("%3d", a[i][j]);

			}
			printf("\n");
		}
		*/

		// 배열 문제2
		/*int a[5][5];
		int num = 1;
		int i = 0;
		int j = 0;

		for (i = 0; i < 5; i++)
		{
			for(j =i; j >=0; j--)
			{
				a[i][j] = num;
				num = num + 1;
			}
		}

		for (i = 0; i < 5; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("%3d", a[i][j]);
			}
			printf("\n");
		}*/

		/*int num[3] = {1,2,3};

		int mat[3] = { 60,50,90 };
		int en[3] = { 30,80,90 };
		int ko[3] = { 80,90,100 };

		int sum[3];
		int avg[3];
		int rank[3];

		for (int i = 0; i < 3; i++)
		{
			sum[i] = mat[i] + en[i] + ko[i];
			avg[i] = sum[i] / 3;
		}

		for (int i = 0; i < 3; i++)
		{
			rank[i] = 1;
			for(int j = 1;j < 3; j++)
			{
				if (avg[j] > avg[i])
				{
					rank[i]++;
				}
			}
		}

		for (int i = 0; i < 3; i++)
		{
			printf("학생 %d - 수학: %d, 영어: %d, 국어: %d, 합계: %d, 평균: %d, 석차: %d\n",
				num[i], mat[i], en[i], ko[i], sum[i], avg[i], rank[i]);
		}*/

		// 배열 문제(1)

		/*int a[8][8] = {0};
		int i, k, c, e;
		k = 0;
		c = (7 / 2) + 1;				// c가 기준

		for (i = 1; i <= 7; i++)
		{

			if (i < c)					// i가 4와 같거나 커질때까지 빼준다
			{
				e = 8 - i;
			}

			else						// 4를 넘어서면 i를 그대로 넣어준다 a[3][4] -> a[4][5] 이런식으로 i가 6이 되면 a[5][6] 되게끔
			{
				e = i;
			}

			for (int j = 1; j <= e; j++)
			{
				k = k + 1;
				a[i][j] = k;
			}
		}

		for (int x = 0; x <= 7; x++)
		{

			for (int y = 0; y <= 7; y++)
			{
				if (a[x][y] != 0)
					printf("%3d", a[x][y]);
				else
					printf(" ");
			}
			printf("\n");
		}*/


		// 배열문제(2)

		/*int a[10][10] = {0};
		int q = 0;
		int c, t, e;
		c = (9 / 2) + 1;

		for (t = 1; t <= 9; t++)
		{
			if (t < c)
			{
				e = 10 - t;
			}
			else
			{
				e = t;
			}
			for (int j = 1; j <= e; j++)
			{
				q = q + 1;
				a[j][t] = q;

			}
		}
		for (int x = 1; x <= 9; x++)
		{

			for (int y = 1; y <= 9; y++)
			{
				if (a[x][y] != 0)
					printf("%3d", a[x][y]);
				else
					printf("   ");
			}
			printf("\n");
		}*/



		// 문제 (3)
	/*int a[7][7] = {0};
	int q = 0;
	int f = 0;
	int k = 1;
	int t,j;
	int e = 0;
	int c = (5 / 2) + 1;

	for (t = 0; t < 7; t++)
	{
		if (t > c)					// t가 3보다 커지면 4번인덱스 행 f는 4번행의 3번열 부터 중심
		{
			f = t - 1;					
			e = t - k;				
			k = k + 2;			
		}
		for (j = 0; j < 7; j++)
		{
			if (t > c && e <= j && j <= f)
			{
				a[t][j] = 0;
			}
			else
			{
				q = q + 1;
				a[t][j] = q;
			}
		}
	}
	for (int x = 0; x < 7; x++)
	{

		for (int y = 0; y < 7; y++)
		{
			if (a[x][y] != 0)
				printf("%3d", a[x][y]);
			else
				printf("   ");
		}
		printf("\n");
	}*/
	
	int val, i;
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		val = rand();
		printf("%d\n", val);
	}

}