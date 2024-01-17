#include<stdio.h>
int main()
{

int a;
scanf("%d",&a);
printf("%d",a%13==0 || (a-1)%13==0);



    return 0;
}