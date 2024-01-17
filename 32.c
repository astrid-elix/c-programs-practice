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
printf("from 1,to :");
scanf("%d",&a);
printf("even number : ");
evenodd(2,a);
printf("\nodd number : ");
evenodd(1,a);
    return 0;
}