#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int namo(int money);

int main(void)
{
	int money;
	int a, b, c;

	printf("�Ž������� �Է��ϼ��� >> ");
	scanf("%d", &money);

	a = money / 500;
	b = (money % 500) / 100;
	c = ((money % 500) % 100) / 10;

	printf("�Ž����� 500�� %d��\n", a);
	printf("�Ž����� 100�� %d��\n", b);
	printf("�Ž�����  10�� %d��\n", c);

	return 0;
}
int namo(int money)
{
	int d = money;
	int a, b, c;

	printf("%d\n", d);

	a = money / 500;
	b = (money % 500) / 100;
	c = ((money % 500) % 100) / 10;
	printf("�Ž����� 500�� %d��\n", a);
	printf("�Ž����� 100�� %d��\n", b);
	printf("�Ž�����  10�� %d��\n", c);
	
	return 0;
}