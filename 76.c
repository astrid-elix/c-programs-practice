#include<stdio.h>
int main()
{
int a,b=0;
printf("enter value :");
scanf("%d",&a);
for (a; a > 0; a=a/10)
{
   b++;
}
printf("%d",b);

    return 0;
}