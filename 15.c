#include<stdio.h>
int large(int a[],int b,int i)
{
    int c;
    
if (i<b)
{
    if (a[0]<a[i])
    {
      c=a[i];
      a[i]=a[0];
      a[0]=c;
    }
    
   i++;
   large(a,5,i);
}

return a[0];
}
int main()
{
int a[5];
for (int i = 0; i < 5; i++)
{
    printf("enter value of %d : ",i);
    scanf("%d",&a[i]);
}
int c=large(a,5,0);
printf("large : %d",c);
    return 0;
}