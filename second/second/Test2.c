#include <stdio.h>

void main()
{
	//int A = 1;
	//int sum = 0;
	//int B = 0;
	//int C = 0;

	//do
	//{
	//	A = 1;
	//	B = 0;
	//	C = C + 1;
	//	do {
	//		B = B + 1;
	//		A = A * B;
	//	} while (B != C);
	//	sum = sum + A;
	//} while (C < 10);
	//printf("%d", sum);

	int A;
	int B;
	int LCM;
	int GCD;
	int C;
	int S;
	int remainder;

	scanf_s("%d", &A);
	scanf_s("%d", &B);
	
	C = A * B;

	if (A < B)
	{
		S = A;
		A = B;
		B = S;
	}
	do
	{
		remainder = A % B;
		A = B;
		B = remainder;
	} while (remainder != 0);
	GCD = A;
	LCM = C / GCD;
	printf("최대공약수 : %d", GCD);
	printf("\n최소공배수 : %d", LCM);
}