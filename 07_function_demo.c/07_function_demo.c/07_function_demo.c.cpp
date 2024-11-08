#include<stdio.h>
int sum(int m1, int m2, int m3)
{
	int sum = m1 + m2 + m3;
	return sum;
}
int main()
{
	int sea1 = sum(10, 20, 15);
	int sea2 = sum(20, 30, 17);
	int sea3 = sum(19, 17, 20);
	int sea4 = sum(23, 21, 19);
	int num1 = sea1 > sea2 ? sea1 : sea2;
	int num2 = num1 > sea3 ? num1 : sea3;
	int num3 = num2 > sea4 ? num2 : sea4;
	if (num3 == sea1)
	{
		printf("第一季度的营业额最高");
	}
	else if (num3 == sea2)
	{
		printf("第二季度的营业额最高");
	}
	else if (num3 == sea3)
	{
		printf("第三季度的营业额最高");
	}
	else
	{	
	    printf("第四季度的营业额最高");
	}
	return 0;
}