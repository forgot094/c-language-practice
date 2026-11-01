#include <stdio.h>
#define SP 20
int main(){
	int i,j,m,n,h;
	printf("input number:");
	scanf("%d",&m);
	n=(m+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=SP+n-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
		
	}
	h=n-1;
	for(i=1;i<=h;i++){
		for(j=1;j<=SP+i;j++)
		printf(" ");
		for(j=1;j<=2*(h-i+1)-1;j++)
		printf("*");
		printf("\n");
		
	}
	getchar();getchar();
	return 0;
	
}
