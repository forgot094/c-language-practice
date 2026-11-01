#include<stdio.h>
int main()
{
	int score;
	printf("请输入一个成绩:");
	scanf("%d",&score);
	if(score<0 || score>100)
	{
		printf("该成绩不合法!");
	}else if(score>=90)
	{
		putchar('A');
	}else if(score>=80)
	{
		putchar('B');
	}else if(score>=70)
	{
		putchar('C');
	}else if(score>=60)
	{
		putchar('D');
	}else
	{
		putchar('E');
	}
		
	
	return 0;
}
