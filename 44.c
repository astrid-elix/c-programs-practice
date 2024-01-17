#include<stdio.h>
int main()
{
int a[3],*b[3],sum=0;
for (int i = 0; i < 3; i++)
{
    printf("value :");
    scanf("%d",&a[i]);
    b[i]=&a[i];
}
for (int i = 0; i < 3; i++)
{
    sum+=*b[i];
}
printf("%d",sum);


}