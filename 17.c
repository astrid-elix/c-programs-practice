#include<stdio.h>
int power(int a,int p)

{
   
if (p>1)
{

  return a*power(a,p-1);
}


}
int main()
{
int a,p,d;
printf("enter base,power :");
scanf("%d%d",&a,&p);
d=power(a,p);
printf("%d",d);
    return 0;
}