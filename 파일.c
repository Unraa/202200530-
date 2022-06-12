#include "헤더.h"
#define MAX 1000


void file() {           //파일 입출력 사용
	int count = 0;
	int b = 0;
	FILE* fp = fopen("count.txt", "w");
	fprintf(fp, "성공적으로 실행하였습니다.\n");
	fclose(fp);

	fopen("count.txt", "r");
	char buffer[MAX] = { 0, };
	fread(buffer,1, MAX, fp);
	printf("%s", buffer);
	fclose(fp);

	return 0;
}