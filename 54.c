#include<stdio.h>
int series(int a, int b,int c)
{
    int d;
    if (c<5)
   {
 
 d=a+b;
a=b;
b=d;
   printf("%d ",b);
series(a,b,c+1);
}

}
int main()
{
int a=0,b=1;
printf("%d %d ",a,b);
series(a,b,0);
    return 0;
}