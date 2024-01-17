#include<stdio.h>
int fact(int a)
{
if (a==1)
{
   return 1;
}
else{
    return a*fact(a-1);
}

}
int main()
{

int a;

scanf("%d",&a);
int c=fact(a);
printf("%d",c);
    return 0;
}