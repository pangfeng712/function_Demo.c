#include<stdio.h>
void sum(int num1,int num2)
{
	int sum = num1 + num2;
	printf("%d\n",sum);
}
int main()
{

	sum( 10,66 );
	sum(10, 66);
	return 0;
}