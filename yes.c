#include "���.h"

void seoul()                  //�Լ� ���
{
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "����");
	strcpy(p1.address, "3,635,708");

	printf("���� �̸�: %s\n", p1.name);
	printf("Ȯ���� ��: %s\n", p1.address);
}
void ggd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "��⵵");
	strcpy(p1.address, "6,024,971");

	printf("���� �̸�: %s\n", p1.name);
	printf("Ȯ���� ��: %s\n", p1.address);

}
void ccd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "��û��");
	strcpy(p1.address, "1,926,913");

	printf("���� �̸�: %s\n", p1.name);
	printf("Ȯ���� ��: %s\n", p1.address);
}
void jrd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "����");
	strcpy(p1.address, "1,733,503");

	printf("���� �̸�: %s\n", p1.name);
	printf("Ȯ���� ��: %s\n", p1.address);
}
void gsd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "���");
	strcpy(p1.address, "4,121,300");

	printf("���� �̸�: %s\n", p1.name);
	printf("Ȯ���� ��: %s\n", p1.address);
}
void gwd() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "������");
	strcpy(p1.address, "519,349");

	printf("���� �̸�: %s\n", p1.name);
	printf("Ȯ���� ��: %s\n", p1.address);
}
void jeju() {
	struct corona p1;
	printf("\n");
	strcpy(p1.name, "���ֵ�");
	strcpy(p1.address, "236,714");

	printf("���� �̸�: %s\n", p1.name);
	printf("Ȯ���� ��: %s\n", p1.address);
}

void yes() {                  
	char a;
	int number;

	printf("\n");
	printf("������ �������ּ���.\n");
	printf("\n");
	printf("1. ���� 2. ��⵵ 3. ������ 4. ���� \n 5. ��� 6. ������ 7. ���ֵ�\n");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
			
	}
}// ���� �ҽ� ���� ���