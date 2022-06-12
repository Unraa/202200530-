#include "헤더.h"

void seoul()                  //함수 사용
{
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "서울");
	strcpy(p1.address, "3,635,708");

	printf("지역 이름: %s\n", p1.name);
	printf("확진자 수: %s\n", p1.address);
}
void ggd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "경기도");
	strcpy(p1.address, "6,024,971");

	printf("지역 이름: %s\n", p1.name);
	printf("확진자 수: %s\n", p1.address);

}
void ccd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "충청도");
	strcpy(p1.address, "1,926,913");

	printf("지역 이름: %s\n", p1.name);
	printf("확진자 수: %s\n", p1.address);
}
void jrd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "전라도");
	strcpy(p1.address, "1,733,503");

	printf("지역 이름: %s\n", p1.name);
	printf("확진자 수: %s\n", p1.address);
}
void gsd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "경상도");
	strcpy(p1.address, "4,121,300");

	printf("지역 이름: %s\n", p1.name);
	printf("확진자 수: %s\n", p1.address);
}
void gwd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "강원도");
	strcpy(p1.address, "519,349");

	printf("지역 이름: %s\n", p1.name);
	printf("확진자 수: %s\n", p1.address);
}
void jeju() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "제주도");
	strcpy(p1.address, "236,714");

	printf("지역 이름: %s\n", p1.name);
	printf("확진자 수: %s\n", p1.address);
}

void yes() {                  
	char a;
	int number;

	printf("\n");
	printf("지역을 선택해주세요.\n");
	printf("\n");
	printf("1. 서울 2. 경기도 3. 충정도 4. 전라도 \n 5. 경상도 6. 강원도 7. 제주도\n");
	scanf("%d", &number);
	printf("\n");

	file(); 
	switch (number) {
		case 1 :
			seoul();
			printf("\n");
			break;
		case 2 :
			ggd();
			printf("\n");
			break;
		case 3:
			ccd();
			printf("\n");
			break;
		case 4:
			jrd();
			printf("\n");
			break;
		case 5:
			gsd();
			printf("\n");
			break;
		case 6:
			gwd();
			printf("\n");
			break;
		case 7:
			jeju();
			printf("\n");
			break;
		default :
			printf("\n");
			printf("잘못 입력하셨습니다.\n");
			break;
			
	}
}// 다중 소스 파일 사용