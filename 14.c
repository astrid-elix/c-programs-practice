#include<stdio.h>
int near(int x,int y)
{
if (x<=13&&y<=13)
{
    if (x>y)
    {
        return x;
    }
    else{
        return y;
    }
    
}
if (x>=13&&y>=13)
{
    if (x<y)
    {
        return x;
    }
    else{
        return y;
    }
    
}


}
int main()
{
int a,b,c;
scanf("%d%d",&a,&b);
c=near(a,b);
printf("near value to c :%d",c);
    return 0;
}