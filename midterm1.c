#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>


int balance = 1000000;

void deposit(unsigned int a)
{
	balance += a;
	printf("현재 잔고는 %d\n", balance);
}

void withdraw(unsigned int b)
{

	if (balance >= b)
	{
		balance -= b;
		printf("현재 잔고는 %d\n", balance);
	}
	else
	{
		printf("잔액이 부족합니다\n");
	}
}

void check_balance()
{
	printf("현재 잔고는 %d\n", balance);
}

int main()
{
	int choice = 0;
	int x;
	int y;
	printf("===== ㅅㅁ은행 atm기입니다=====\n");
first:
	printf("1.입금\n2.출금\n3.잔액조회\n4.종료\n원하는 작업 번호를 입력하세요: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("입금할 금액 입력: ");
		scanf("%d", &x);
		deposit(x);
		goto first;
	case 2:
		printf("출금할 금액 입력: ");
		scanf("%d", &y);
		withdraw(y);
		goto first;
	case 3:
		check_balance();
		goto first;
	case 4:
		printf("안녕히 가세요");
		break;
	default:
		printf("올바른 작업 번호를 선택하세요.");
		goto first;
	}
	return 0;

}