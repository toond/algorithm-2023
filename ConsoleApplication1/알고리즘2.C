#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 가짜 동전 찾기

int main(void)
{
	int arr[100] = { 0 };
	int i;
	srand(unsigned int(time(NULL)));
	
	arr[rand() % 100] = 1;

	for (i = 0; i < 100; i++)
	{
		printf("%d\n", arr[i]);
	}
}

