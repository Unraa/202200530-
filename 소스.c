#include "���.h"


int main(void)
{
	char* answer;               //������ ���
	char y = 'y';
	answer = &y;                 // ������ Ȱ��
	char a;
	char b;
	char arr[] = { 'O','X'};            //�迭 ���
	printf("�����ұ��? (O/X)\n");
	scanf("%c", &b);
	if (b == arr[0]) {
		printf("\n");
		printf("�����ϰڽ��ϴ�.\n");
	}
	else {
		printf("���α׷��� �����մϴ�.\n");
		exit(0);
	}
	
		printf("���ѹα� Ȯ���� �� ���� 18,198,458�Դϴ�. �� �ڼ��� �˾ƺ��ðڽ��ϱ�? (y/n) ");
	scanf("%s", &a);
	if (a == answer[0]) {
		yes();
	}

	else (a == answer[1]); {
		printf("���α׷��� �����մϴ�.\n");
		exit(0);
	}
	return 0;
}