#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("请输入三个整数:");
	scanf("%d %d %d",&num1,&num2,&num3);
	max=num3;
	if(num1>num3)
	{
		max=num1;
	}
	if(num2>num3)
	{
		max=num2;
	}
	printf("三个数中最大的是:%d\n",max);
	return 0;
	
}
