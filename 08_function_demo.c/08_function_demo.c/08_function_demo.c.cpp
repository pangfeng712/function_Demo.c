#include<stdio.h>
double getarea(double r)
{
	double pi = 3.1415926;
	double area = 4 * pi * r * r;
	return area;
}
int main()
{
	double areaA = getarea(2.25);
	double areaB = getarea(3.12);
	if (areaA > areaB)
	{
		printf("A的圆比B的圆面积大");
	}
	else if (areaA < areaB)
	{
		printf("A的圆比B的圆面积小");
	}
	else
	{
		printf("A的圆跟B的圆面积一样大");
	}
	return 0;
}