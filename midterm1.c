#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>


int balance = 1000000;

void deposit(unsigned int a)
{
	balance += a;
	printf("���� �ܰ�� %d\n", balance);
}

void withdraw(unsigned int b)
{

	if (balance >= b)
	{
		balance -= b;
		printf("���� �ܰ�� %d\n", balance);
	}
	else
	{
		printf("�ܾ��� �����մϴ�\n");
	}
}

void check_balance()
{
	printf("���� �ܰ�� %d\n", balance);
}

int main()
{
	int choice = 0;
	int x;
	int y;
	printf("===== �������� atm���Դϴ�=====\n");
first:
	printf("1.�Ա�\n2.���\n3.�ܾ���ȸ\n4.����\n���ϴ� �۾� ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("�Ա��� �ݾ� �Է�: ");
		scanf("%d", &x);
		deposit(x);
		goto first;
	case 2:
		printf("����� �ݾ� �Է�: ");
		scanf("%d", &y);
		withdraw(y);
		goto first;
	case 3:
		check_balance();
		goto first;
	case 4:
		printf("�ȳ��� ������");
		break;
	default:
		printf("�ùٸ� �۾� ��ȣ�� �����ϼ���.");
		goto first;
	}
	return 0;

}