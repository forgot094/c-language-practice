#include<stdio.h>
int main()
{
	int score;
	printf("请输入一个成绩:");
	scanf("%d",&score);
		if(score<0 || score>100)
	{
		printf("该成绩不合法!");
	    return 1;
	}
	switch(score / 10)
	{
		case 10:
		case 9:
		    putchar('A');
		    break;
		case 8:
		    putchar('B');
		    break;
		case 7:
			putchar('C');
			break;
		case 6:
			putchar('D');
			break;
		default:
			putchar('E');
			break;
	}
	return 0;
}
