/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void cho(int a, int ran)
{
    if (a == 1) printf("�� : ����\n");
    else if (a == 2) printf("�� : ����\n");
    else if (a == 3) printf("�� : ��\n");
    
    if (ran == 1) printf("com : ����\n");
    else if (ran == 2) printf("com : ����\n");
    else if (ran == 3) printf("com : ��\n");
}
void game(int a, int ran)
{

    if (a == ran)
    {
        printf("����\n");
    }

    else if((a == 1 && ran == 3) || (a == 2 && ran == 1) || (a == 3 && ran == 2))
    {
        printf("�̰��\n");
    }
    else
    {
        printf("����\n");
    }

}


main()
{
	srand((unsigned int)time(NULL));
	
	int ran = rand() % 3 +1;
	int a;
	printf("���������� ���ڸ� �Է����ּ��� : 1. ���� 2. ���� 3. ��\n ");
	scanf_s("%d", &a);
    
    cho(a, ran); 
    game(a, ran);
}*/