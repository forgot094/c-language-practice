#include<stdio.h>
int main()
{
	int i,a=1,b=1,n;
	printf("斐波那契数列前20项为: \n");
	printf("%d\n%d\n",a,b);
	for(i = 3;i <= 20;i++)
	{
		n=a+b;
		printf("%d\n",n);
		a=b;
		b=n;
	}
	return 0;
}
