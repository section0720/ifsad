#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdint.h>


int main()
{
	printf("=== 아이스바 그리기 프로그램 ===\n");
	int a;
	int i, j, k;
start:
	printf("아이스바의 크기를 3이상의 홀수로 입력하세요: ");
	scanf("%d", &a);
	if (a % 2 == 0 || a < 3)
	{
		printf("아이스바의 크기가 범위를 벗어납니다 (짝수 또는 3미만)\n");
		printf("\n");
		goto start;
	}
	else
	{
		for (i = 0; i < a; i++)
			printf("*");
		printf("\n");
		for (i = 0; i < a - 2; i++)
		{
			for (k = 0; k<2; k++)
			{ 
				printf("*");
			    for (j = 0; j < (a - 3) / 2; j++)
					printf(" ");
			}
			printf("*\n");
		}
		for (i = 0; i < a; i++)
			printf("*");
		printf("\n");
		for (j = 0; j < a/5; j++)
		{
			for (i = 0; i < (a - 1) / 2; i++)
				printf(" ");
			printf("|\n");
		}
	}
}
