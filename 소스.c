#include "헤더.h"


int main(void)
{
	char* answer;               //포인터 사용
	char y = 'y';
	answer = &y;                 // 포인터 활용
	char a;
	char b;
	char arr[] = { 'O','X'};            //배열 사용
	printf("시작할까요? (O/X)\n");
	scanf("%c", &b);
	if (b == arr[0]) {
		printf("\n");
		printf("시작하겠습니다.\n");
	}
	else {
		printf("프로그램을 종료합니다.\n");
		exit(0);
	}
	
		printf("대한민국 확진자 총 수는 18,198,458입니다. 더 자세히 알아보시겠습니까? (y/n) ");
	scanf("%s", &a);
	if (a == answer[0]) {
		yes();
	}

	else (a == answer[1]); {
		printf("프로그램을 종료합니다.\n");
		exit(0);
	}
	return 0;
}