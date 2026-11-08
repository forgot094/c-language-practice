#include<stdio.h>
int main()
{
	int i,j;
	printf("2~10000中所有的完数有:\n");
	for (i=2;i <= 10000;i++)
	{
		int n=0;
		for(j=1;j<=i/2;j++) 
		{
			if(i % j == 0)
			{
				n+=j;
			}
		}
		if(n == i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
