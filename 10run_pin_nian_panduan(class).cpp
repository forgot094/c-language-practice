#include<stdio.h>
int main()
{
	int year;
	printf("请输入一个年份:");
	scanf("%d",&year);
	if(year<1000 || year>9999)
	{
		printf("该年份不合法!");
	}
	else if((year % 4 ==0 && year %100 != 0)||(year % 400 ==0))
	{
		printf("%d是闰年!\n",year);
	}
	else
	{
		printf("%d不是闰年,是平年!\n",year);
		
	}
	return 0;
}
