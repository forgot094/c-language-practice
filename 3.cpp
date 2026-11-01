#include<stdio.h>
int main(){
	char ch;
	printf("Please input two character:");
	ch=getchar();
	putchar(ch);putchar('\n');
	putchar(getchar());
	return 0;
}
