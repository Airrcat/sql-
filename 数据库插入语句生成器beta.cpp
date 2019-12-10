#include <iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int id = 9940303;
	int id2 = 99402;
	printf("你想生成的语句条数\n");
	int sum, d;
	scanf_s("%d", &sum);
	int year, month, day;
	for (int i = 0; i < sum; i++) {
		year = 79 + rand() % 20;
		month = rand() % 12 + 1;
		day = rand() % 28 + 1;
		printf("Insert into student values('g%d', 'zhanghong', 'nv', '19%2d-%02d-%02d', 'g%d', 'dep_%02d', 'syhpq34h');\n", id++, year, month, day, (id2++)%5, i%10);
	}
}