#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdint.h>


int main()
{
	printf("=== ���̽��� �׸��� ���α׷� ===\n");
	int a;
	int i, j, k;
start:
	printf("���̽����� ũ�⸦ 3�̻��� Ȧ���� �Է��ϼ���: ");
	scanf("%d", &a);
	if (a % 2 == 0 || a < 3)
	{
		printf("���̽����� ũ�Ⱑ ������ ����ϴ� (¦�� �Ǵ� 3�̸�)\n");
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
