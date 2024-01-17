#include<stdio.h>
int main()
{
    int binary=0;
    int a,b;
    printf("enter value :");
    scanf("%d",&a);
  
  if (a>=64)
  {
    a=a-64;
    printf("1");
  }else
  {
    printf("0");
  }

   if (a>=32)
  {
    a=a-32;
    printf("1");
  }else
  {
    printf("0");
  }

   if (a>=16)
  {
    a=a-16;
    printf("1");
  }else
  {
    printf("0");
  }

 if (a>=8)
  {
    a=a-8;
    printf("1");
  }else
  {
    printf("0");
  }

   if (a>=4)
  {
    a=a-4;
    printf("1");
  }else
  {
    printf("0");
  }   
  if (a>=2)
  {
    a=a-2;
    printf("1");
  }else
  {
    printf("0");
  } 

       if (a>=1)
  {
    a=a-1;
    printf("1");
  }else
  {
    printf("0");
  }
    
    

    return 0;
}