#include "���.h"
#define MAX 1000


void file() {           //���� ����� ���
	int count = 0;
	int b = 0;
	FILE* fp = fopen("count.txt", "w");
	fprintf(fp, "���������� �����Ͽ����ϴ�.\n");
	fclose(fp);

	fopen("count.txt", "r");
	char buffer[MAX] = { 0, };
	fread(buffer,1, MAX, fp);
	printf("%s", buffer);
	fclose(fp);

	return 0;
}