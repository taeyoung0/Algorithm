//#include <stdio.h>
//
//main()
//{
//	//1 / 1 + 1 / 2 + 1 / 3 + .... + 1 / 10 �м� ����
//	float sum = 0;
//	float a = 0;
//	int b = 1;
//
//	do
//	{
//		a = 1 / (float)b;
//		b = b + 1;
//		sum = sum + a;
//	} while (b <= 10);
//	printf("%f", sum);
//
//	//1 / 2 + 2 / 3 + 3 / 4 + 4 / 5.... + 99 / 100 �м� ����
//	float sum2 = 0;
//	int i = 1;
//	do 
//	{
//		sum2 = sum2 + (float)i / (float)(i + 1);
//		i = i + 1;
//	} while (i <= 99);
//	printf("\n%f", sum2);
//
//	// ������ ������ �Է¹޾� �Ҽ������� �Ǻ�
//	int m;
//	int f = 0;
//	int t = 1;
//
//	scanf_s("\n%d",&m);
//	do
//	{
//		t = t + 1;
//		if (m % t == 0)
//		{
//			f = 1;
//			break;
//		}
//	} while (t < m - 1);
//	if (f == 0 || m == 2)
//		printf("�Ҽ�");
//	else
//		printf("�Ҽ��ƴ�");
//
//	// ������ ������ �Է¹޾� �Ҽ������� �Ǻ� flag ���� �غ���
//	int r;
//	int o = 1;
//
//	scanf_s("\n%d", &r);
//	do
//	{
//		o = o + 1;
//		
//	} while ((r % o) != 0);
//
//	if (r == o)
//		printf("�Ҽ�");
//	else
//		printf("�Ҽ��ƴ�");
//
//	int x;
//	int y = 0;
//	int cnt = 0;
//	int sum3 = 0;
//
//		scanf_s("%d", &x);
//
//		do {
//			do {
//				y = y + 1;
//				if (x % y == 0)
//					cnt = cnt + 1;
//			} while (y < x);
//			if (cnt == 2)
//				sum3 = sum3 + x;
//			x = x - 1;
//			y = 1;
//			cnt = 1;
//		} while (x >= 0);
//
//		printf("%d", sum3);
//}