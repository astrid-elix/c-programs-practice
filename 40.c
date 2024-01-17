#include<stdio.h>

int small(int a[] , int b)
{
  
int max=-9999;

if (a[b]>max)
{
    max=a[b];
   
   
}
else if(b<0)
{
   return max;
}

    

small(a,b+1);


}
int main()
{
int a[4];
for (int i = 0; i < 4; i++)
{
    printf("enter value :");
    scanf("%d",&a[i]);
}
int b=small(a,0);
printf("%d",b);
    return 0;
}