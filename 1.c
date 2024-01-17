#include<stdio.h>
int near(int a, int b)
{
if (a==b)
{
    return 0;
}
else if(a>b&&a<=100){
return a;
}
else if(b>a&&b<=100){
return b;
}

}
int main()
{
int a,b,c;
printf("enter a,b : ");
scanf("%d%d",&a,&b);
c=near(a,b);
printf("%d",c);


return 0;
}