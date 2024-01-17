#include<stdio.h>
int digit(int a,int b)
{
if (a==0)
{
    return b;
}
digit(a/10,b+1);
}
int main()
{
int a;
printf("value :");
scanf("%d",&a);
int x=digit(a,0);
printf("digits : %d",x);
    return 0;
}