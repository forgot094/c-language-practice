#include<stdio.h>
int main()
{
	int ch;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®: ");
	while((ch = getchar())!= '\n')
	{
		if(ch >= 'A' && ch <='Z')
		{
			ch +=32;
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			ch -=32;
		}
		putchar(ch);
	}
	printf("\n");
	return 0;
}
