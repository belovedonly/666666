#include<stdio.h>
#include<cmath>
int main()
{
	float a,b,c,x1,x2,flag;
	scanf("%f,%f,%f",&a,&b,&c);
	flag=b*b-4*a*c;
	if(flag>0||flag==0){
		x1=(-b+sqrt(flag))/2*a,x2=(-b-sqrt(flag))/2*a;
		printf("�ö��κ����и���x1=%f��x2=%f\n",x1,x2);
	}
	else {
		printf("�ö��κ����޸�\n");         
	}           
	return 0;
}

