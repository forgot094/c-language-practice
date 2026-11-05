#include<stdio.h>
int main()
{
	int ch,a=0,b=0;
	printf("请输入一串字符，以*结束:");
	while((ch = getchar()) != '*')
	{
		if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
		{
			a++;
		}
		else if(ch >= '0' && ch <= '9')
		{
			b++;
		}
	}
	printf("字母字符的个数为:%d\n",a);
	printf("数字字符的个数为:%d\n",b);
	return 0;
}
