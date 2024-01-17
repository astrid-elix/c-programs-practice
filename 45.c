#include<stdio.h>
int main()
{
int a=0,b=1,c;
int *p= NULL;

printf("%d %d ",a,b);
for (int i = 0; i < 7-2; i++)
{
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}

printf("\npointer value =%d",p);




    return 0;
}