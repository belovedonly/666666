#include<stdio.h>
int main()
{
	printf("����һ����λ:"); 
	int x;
	scanf("%d",&x);
    int i;
    i=x%10*100+(x/10)%10*10+x/100;
    printf("i=%d\n",i);
    return 0;
	 
	
}
