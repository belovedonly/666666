#include<stdio.h>
#define EPS 1e-8
int main()
{
	double e=1,fact=1;
	long n=0;
	do{
		n++;
		fact*=n;
		e=e+1/fact;
	}while(fact>EPS);
	printf("e=%0.8f\n",e);
	return 0;
 } 
