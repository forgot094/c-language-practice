#include <stdio.h>
#include <stdlib.h>//为了用rand()
#include <time.h> //为了用time()
int main(){
	int target,guess;
	
	//1.初始化随机数种子
	srand(time(0));
	
	//2.生成1~100的随机数（记住这个公式，以后做游戏很有用）
	target=rand()% 100 + 1;
	
	printf("我已经想好了一个1~100之间发数字，你猜猜看！\n");
	
	//3.开始无限循环
	while(1){
		printf("请输入你的猜测:");
		scanf("%d",&guess);
		
		//4.核心逻辑
		if(guess>target){
			printf("猜大了!\n");
		} else if(guess<target){
			printf("猜小了!\n");
		}else{
			printf("恭喜你,猜对了!目标数字就是%d\n",target);
			break;//猜对了，跳出循环，游戏结束 
		}
	} 
	
	return 0;
	
} 
