#include<stdio.h>
int range(int a, int b)
{
return a>=40&&a<=50&&b>=40&&b<50||a>=50&&a<=60&&b>=50&&b<=60;

}
int main()
{
int a,b,c;
printf("enter value a,b:");
scanf("%d %d",&a,&b);
c=range(a,b);
printf("%d",c);
    return 0;
}