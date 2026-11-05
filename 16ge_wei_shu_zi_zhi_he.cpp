#include<stdio.h>
int main()
{
	long long num,i,a=0;
	printf("请输入一个正整数:");
	scanf("%lld",&num);
	for(i=0;num >0;)
	{
	a=num%10;
	num=num / 10;
	i+=a;
	}
	printf("%lld\n",i);
	return 0;
}
