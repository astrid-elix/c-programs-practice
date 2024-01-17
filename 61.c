#include<stdio.h>
int main()
{
    int sum=0,avg;
int a[5]={10,20,30,40,50};
for (int i = 0; i < 5; i++)
{
    sum+=a[i];
}
avg=sum/5;
printf("avg=%d",avg);

    return 0;
}