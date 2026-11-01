#include <stdio.h>
int main(){
	int year ;//定义一个变量，用来存放年份
	
	printf("请输入一个年份:");
	scanf("%d",&year);//获取你键盘输入的数字
	
	//核心逻辑判断
	if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
		printf("%d 是闰年!\n",year);
	} else {
		printf("%d 不是闰年,是平年.\n",year);
	}
	return 0;
} 
