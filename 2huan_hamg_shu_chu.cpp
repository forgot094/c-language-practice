#include"stdio.h"
int main(){
	char ch1='N',ch2='E',ch3='W';
	putchar(ch1);
	putchar(ch2);putchar(ch3);
	putchar('\n');
	putchar('\x4E');putchar('\n');
	putchar('E');
	putchar('\n');
	putchar('\127');putchar('\n');
	return 0;
	
}
