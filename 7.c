#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int *p=&a,*q=&b;
if (*p>*q)
{
    printf("max num is : %d",*p);
}
else
{
    printf("max num is : %d",*q);
}

return 0;
}