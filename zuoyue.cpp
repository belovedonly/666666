#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2;
	double flag;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	if(flag==0||flag>0){
		x1=(-b+sqrt(flag))/(2*a),x2=(-b-sqrt(flag))/(2*a);
		
		printf("�ö��κ����и���x1=%lf��x2=%lf\n",x1,x2);
	}
	else 
	{
		printf("�ö��κ����޸�\n");         
	}           
	return 0;
}
