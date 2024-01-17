#include<stdio.h>
int main()
{
float a,c;
int b;
printf("enter value :");
scanf("%f",&a);
b=a;
c=(float)a-(float)b;
if (c>=0.5)
{
   printf("%d",b+1);
}
else{

    printf("%d",b-1);
}
   return 0;
}