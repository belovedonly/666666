#include<stdio.h>
int main()
{
	int m,sum=0,n=1;
	printf("Please input a ainteger(>1):");
	scanf("%d",&m);
	do{
		if(sum!=m)
		sum=sum+n;
		n++;
		
	} while(n<=m-1);
	if(sum==m)
	printf("是完数");
	else 
	printf("不是完数");
	return 0;
}
