#include<stdio.h>
int main()
{
    int d,a[10],b,i=0,c;

printf("enter decimal number :");
scanf("%d",&d);
for ( i;  d>0; i++)
{
 
    c=d%2;
    d=d/2;
    a[i]=c;
}

for (int j = i-1;   j>=0; j--)
{
   printf("%d",a[j]);
}

    return 0;
}