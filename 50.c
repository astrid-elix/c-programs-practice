#include<stdio.h>
int main()
{
    int a[5],b;
for (int i = 0; i < 5; i++)
{
    printf("enter value : ");
    scanf("%d",&a[i]);
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
     if (a[i]<a[j])
     {
       b=a[j];
       a[j]=a[i];
a[i]=b;

     }
     


    }
    
}
printf("assending order : ");
for (int i = 0; i < 5; i++)
{
    printf("%d ",a[i]);
}
printf("\n");
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (a[i]>a[j])
        {
          b=a[j];
          a[j]=a[i];
          a[i]=b;
        }
        
    }
    
}
printf("desending order : ");
for (int i = 0; i < 5; i++)
{
    printf("%d ",a[i]);
}


    return 0;
}