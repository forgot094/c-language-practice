#include<stdio.h>
#include<math.h>
int main()
{
	double e=1.0,a=1.0;
	int i,n=1;
	for(i=1; ;i++)
	{
		a =a/i;
		e +=a;
		n++;
		if(fabs(a) <1e-5)
		{
			break;
		}
	}
	printf("e = %.10f\n",e);
	printf("ÏîÊý = %d\n",n);
	return 0;
}
