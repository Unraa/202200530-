//컴퓨터프로그래밍 과제
//202200530 김라운 컴퓨터공학부
//지역별 코로나 확진 추세



#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct corona {           //구조체 사용
	char name[20];
	char address[100];
};

void seoul();
void ggd();
void ccd();
void jrd();
void gsd();
void gwd();
void jeju();


void start();

