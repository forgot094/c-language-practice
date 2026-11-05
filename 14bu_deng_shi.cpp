#include<stdio.h>
int main()
{
	long long a=1,n,m,i=0;
	printf("请输入一个n值:");
	scanf("%lld",&n);
	for(m=1;;m++)
	{
		a*=m;
		i+=a;
		if(i>=n)
		{
			break;
		}
	}
	printf("%lld\n",m-1);
	return 0;
}
