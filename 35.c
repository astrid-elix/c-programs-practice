#include<stdio.h>
int main()
{

int a,b,*c,*d;
scanf("%d%d",&a,&b);
switch (a>b)
{
case 1:
    c=&a;
    printf("largest number is %d",*c);
    break;
case 0:
d=&b;
printf("largest number is %d",*d);
break;

}

    return 0;
}