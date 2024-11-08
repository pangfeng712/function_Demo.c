#include<stdio.h>
void playgame()//需定义在main外面，因为main也是一个函数
{
	printf("1\n");
	printf("2\n");
	printf("4\n");
	printf("5\n");
	printf("6\n");
}
int main()
{
	playgame();
	printf("----------\n");
	playgame();
	return 0;
}