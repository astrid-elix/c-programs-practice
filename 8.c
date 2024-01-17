#include<stdio.h>
int digit (int b)
{
    int c;
if (b==0)
{
    return 0;
}
else{
c=b%10;
return c+digit(b/10);
}


}
int main()
{
int a;
printf("enter value :");
scanf("%d",&a);
int c=digit(a);
printf("%d",c);
    return 0;
}