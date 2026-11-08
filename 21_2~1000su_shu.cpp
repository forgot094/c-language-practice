#include<stdio.h>
int main()
{
	int i,j,num=0,pd;
	for(i=3;i <= 1000;i++)
	{
		pd=1;
		for(j=2;j <= i/2;j++)
		{
			if(i % j ==0)
			{
				pd=0;
				break;
		    }
		}
		if(pd == 1)
		{
			printf("%d ",i);
			num++;
			if(num == 20)
			{
				num-=20;
				printf("\n");
			}
		}
	}
	return 0;
}
