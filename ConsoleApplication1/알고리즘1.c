#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int namo(int money);

int main(void)
{
	int money;
	int a, b, c;

	printf("거스름돈을 입력하세요 >> ");
	scanf("%d", &money);

	a = money / 500;
	b = (money % 500) / 100;
	c = ((money % 500) % 100) / 10;

	printf("거스름돈 500원 %d개\n", a);
	printf("거스름돈 100원 %d개\n", b);
	printf("거스름돈  10원 %d개\n", c);

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
	printf("거스름돈 500원 %d개\n", a);
	printf("거스름돈 100원 %d개\n", b);
	printf("거스름돈  10원 %d개\n", c);
	
	return 0;
}