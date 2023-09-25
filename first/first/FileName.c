#include <stdio.h>

// 10항 까지의 홀수들의 합
main() {
	int sum = 0;
	int a = 1;
	int b = 1;
	int i = 0;
	do {
		sum = sum + a;
		a = a + b;
		b = b + 2;
		i = i + 1;			// i로 카운트
	} while (i < 10);

	printf("%d", sum);
}
 

// 10항까지 순서대로 더한 값
//main() {
//	int sum = 0;
//	int a = 1;
//	int b = 1;
//
//	do {
//		sum = sum + a;
//		a = a + b;
//		b = b + 1;
//	} while (b <= 10);
//
//	printf("%d", sum);
//}

// 10항까지 더한 값
//main() 
//{
//	int sum = 0;
//	int a = 1;
//	int b = 2;
//
//	do {
//		sum = sum + a;
//		a = a + b;
//		b = b + 1;
//	} while (b <= 11);
//	printf("%d", sum);
//}


// 1~100까지의 합과 차
//main()
//{
//	int sum = 0;
//	int a = 0;
//	int sw = 1;
//	do {
//		sum = sum + (a*sw);
//		a = a + 1;
//		sw = sw * -1; 
//	} while (a < 100);
//	printf("%d", sum);
//}

// 1~100까지의 합과 차2
//main()
//{
//	int sum = 0;
//	int a = 0;
//	int sw = 0;
//	do {
//		a = a + 1;
//		if (sw == 0)
//		{
//			sum = sum + a;
//			sw = 1;
//		}
//		else
//		{
//			sum = sum - a;
//			sw = 0;
//		}
//	} while (a < 100);
//	printf("%d", sum);
//}