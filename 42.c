#include<stdio.h>
int main()
{
int a[3];
int b,c;
for (int i = 0; i < 3; i++)
{
    printf("value:");
    scanf("%d",&a[i]);
}
for (int i = 0; i < 3; i++)
{
  if (a[0]<a[i])
  {
c=a[0];
a[0]=a[i];
a[i]=a[0];
  }
  
}

printf("%d",a[0]);
    return 0;
}