#include <stdio.h>
#include <limits.h>
void main()
{
//	//int A = 1;
//	//int sum = 0;
//	//int B = 0;
//	//int C = 0;
//
//	//do
//	//{
//	//	A = 1;
//	//	B = 0;
//	//	C = C + 1;
//	//	do {
//	//		B = B + 1;
//	//		A = A * B;
//	//	} while (B != C);
//	//	sum = sum + A;
//	//} while (C < 10);
//	//printf("%d", sum);
//
//	int A;
//	int B;
//	int LCM;
//	int GCD;
//	int C;
//	int S;
//	int remainder;
//
//	scanf_s("%d", &A);
//	scanf_s("%d", &B);
//	
//	C = A * B;
//
//	if (A < B)
//	{
//		S = A;
//		A = B;
//		B = S;
//	}
//	do
//	{
//		remainder = A % B;
//		A = B;
//		B = remainder;
//	} while (remainder != 0);
//	GCD = A;
//	LCM = C / GCD;
//	printf("�ִ����� : %d", GCD);
//	printf("\n�ּҰ���� : %d", LCM);
// -----------------------------------

	/*int i = 0;
	int sum = 0;
	int cnt = 0;

	do
	{
		i = i + 1;
		if (i % 5 == 0)
		{
			cnt = cnt + 1;
			sum = sum + i;
		}
	}while (i < 100);

	printf("%d", sum);
	printf("\n%d", cnt);
	*/

	// ���� ������ for������ �ٲ㺽

	/*int i = 0;
	int sum = 0;
	int cnt = 0;
	
	for (i = 0; i <= 100; i++)
	{
		if (i % 5 == 0)
		{
			sum = sum + i;
			cnt = cnt + 1;
		}
	}

	printf("%d", sum);
	printf("\n%d", cnt);*/

	// �Է¹��� ���� 10�� �� 7�� ���� ����� ���ڸ� ã�� �˰���
	/*int a[10];
	int b[10];
	int dif,j = 0;
	int s_dif = INT_MAX;
	
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
		dif = a[i] - 7;
		if (dif < 0)
		{
			dif = dif * -1;
		}
		if (s_dif == dif)
		{
			j= j+1;
			b[j] = a[i];
			
		}
		else if (s_dif > dif)
		{
			s_dif = dif;
			j = 0;
			b[j] = a[i];
		}
	}
	printf("��� ���\n");
	for (int x = 0; x <= j; x++)
	{
		printf("%d\n", b[x]);
	}*/
	//--------------------------------

	// �������� ����
	/*int a[10], tmp;
	
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i]<a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("���Ȯ��\n");
	for (int x = 0; x < 10; x++)
	{
		printf("%d\n", a[x]);
	}*/

	//------------------------------

	
}