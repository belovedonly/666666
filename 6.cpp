#include<stdio.h>
int main()
{    int a,b;
     a=sizeof(3+5.0);
     b=sizeof 3+5.0;
     printf("%d,%d,%d\n",a,b,sizeof("china"));
     return 0;
}
