#include<stdio.h>
int sum(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	int t1 = sum(93, 10);
	int t2 = sum(87, 9);
	if (t1>t2)
	{
		printf("小慧慧的成绩高");
	}
	else if (t1<t2)
	{
		printf("小丹丹的成绩高");
	}
	else
	{
		printf("小慧慧与小丹丹的成绩一样高");
	}
	return 0;
}
