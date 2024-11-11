#include<stdio.h>
#include<time.h>	
#include<stdlib.h>
int main()
{
	int count = 0;
	srand(time(NULL));
	for (int i = 1; i <= 10000; i++)
	{
		int num = rand()%76+12;//12~87的随机数，87+1-12=76，所以对76取余再加12
		printf("%d\n", num);
		if (num == 87)
		{
			count++;
		}
	}
	printf("————————————\n");
	printf("%d\n",count);
	return 0;
}
