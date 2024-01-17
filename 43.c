#include<stdio.h>
int small(int a[], int b)
{
 int c ;
if (b<3)
{
  if (a[0]>a[b])
  {
  c=a[b];
  a[0]=a[b];
  a[b]=c;
  }
  return small(a,b+1);
}



return a[0];
}

int main()
{
int a[3];
for (int i = 0; i < 3; i++)
{
printf("enter value :");
scanf("%d",&a[i]);
}
int min =small(a,0);
printf("%d",min);
    return 0;
}