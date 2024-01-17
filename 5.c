#include<stdio.h>
int add(int *p, int *q)
{
return *p+*q;
}

int main()
{
int a,b;
printf("a,b :");
scanf("%d%d",&a,&b);
int c=add(&a,&b);
printf("%d",c);
    return 0;
}