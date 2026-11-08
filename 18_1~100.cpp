#include<stdio.h>
int main()
{
	int i,a,b,c; 
    for(i=1;i <= 999;i++)
	{
		if(i % 3 ==0)
		{
			a=i%10;
			b=i/10%10;
			c=i/100;
			if((a == 5)||(b == 5)||(c == 5))
			{
				printf("%d\n",i);
			}
		}
	} 
	return 0;
}
