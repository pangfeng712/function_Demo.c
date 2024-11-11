//随机生成1~100中一个数
//键盘录入一个数去猜，猜中为止

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	//生成随机数
	srand(time(NULL));
	int num = rand() % 100 + 1;//设置1~100的范围

	for (int i = 1; ; i++)//无限猜，猜中为止
	{
		int A;
		printf("请输入一个数去猜：");
		scanf_s("%d",&A);//键盘录入数据，每次循环录入的A不同

		if (A == num)
		{
			printf("中了，游戏结束\n");
			break;//中了就截至
		}
		else if (A > num)
		{
			printf("大了，请继续猜\n");
		}
		else
		{
			printf("小了，请继续猜\n");
		}
	}
	return 0;
}