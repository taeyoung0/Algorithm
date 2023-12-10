/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void cho(int a, int ran)
{
    if (a == 1) printf("나 : 가위\n");
    else if (a == 2) printf("나 : 바위\n");
    else if (a == 3) printf("나 : 보\n");
    
    if (ran == 1) printf("com : 가위\n");
    else if (ran == 2) printf("com : 바위\n");
    else if (ran == 3) printf("com : 보\n");
}
void game(int a, int ran)
{

    if (a == ran)
    {
        printf("비겼다\n");
    }

    else if((a == 1 && ran == 3) || (a == 2 && ran == 1) || (a == 3 && ran == 2))
    {
        printf("이겼다\n");
    }
    else
    {
        printf("졌다\n");
    }

}


main()
{
	srand((unsigned int)time(NULL));
	
	int ran = rand() % 3 +1;
	int a;
	printf("가위바위보 숫자를 입력해주세요 : 1. 가위 2. 바위 3. 보\n ");
	scanf_s("%d", &a);
    
    cho(a, ran); 
    game(a, ran);
}*/