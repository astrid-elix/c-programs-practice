#include<stdio.h>
int main ()
{
int a,b,c=1;
printf("number ,power :");
scanf("%d%d",&a,&b);
for ( b; b > 0; b--)
{
    c*=a;
}
printf("%d",c);
    return 0;
}