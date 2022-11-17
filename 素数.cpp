#include<stdio.h>
int main()
{
	int x = 2;

	for (; x < 100; x++)
	{
		int is = 1, i;
		for (i = 2; i <x; i++)
		{
			if (x % i == 0)//²»ÊÇËØÊý 
			{
				is = 0;
				break;
			}
		
		}
			if (is == 1)  printf("%d\n", x); 
	}
	return 0;
}




