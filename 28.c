#include<stdio.h>
int main()
{
int a[6]={6,8,4,-5,7,9};
printf("given array : ");
for (int i = 0; i < 6; i++)
{
  printf("%d ",a[i]);
}
int c,b;
printf("\npair the element for sum from 0 to 5 : ");
scanf("%d%d",&c,&b);
printf("sum of chossen value stored index :%d",a[c]+a[b]);

    return 0;
}