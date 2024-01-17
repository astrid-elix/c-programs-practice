#include<stdio.h>
int evenodd(int p, int q)
{
if (p<q)
{
    printf("%d ",p);
}
else{
    return 0;
}
evenodd (p+2,q);
}
int main()
{
int a,b,c;
printf("from ,to :");
scanf("%d%d",&a,&b);
printf("even number : ");
if (a%2!=0)
{
    a=a+1;
}

evenodd(a,b);
if (a%2==0)
{
   a=a-1;
}

printf("\nodd number : ");
evenodd(a,b);
    return 0;
}