#include<stdio.h>
#include<math.h>
#include<time.h>
int main() 
{
	//整数的绝对值
	long res1 = labs(-25644L);
	long long res2 = llabs(-29999545L);
	int res3=abs(-29);
	printf("%ld\n",res1);
	printf("%lld\n",res2);
	printf("%d\n", res3);
	//小数的绝对值
	double res4=fabs(-1.654);
	printf("%.3lf\n", res4);

	
	long long res5 = time(NULL);
	printf("%lld\n", res5);
	return 0;
}