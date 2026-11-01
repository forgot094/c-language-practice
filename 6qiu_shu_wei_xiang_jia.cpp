#include<stdio.h>
int main()
{
	int number,a,b,c;
	printf("请输入一个三位整数:");
	scanf("%d",&number);
	a=number/100;
	b=number/10%10;
	c=number%10;
	printf("%d\n",a+b+c);
	return 0;
	
}
