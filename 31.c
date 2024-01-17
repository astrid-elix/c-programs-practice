#include<stdio.h>
int oddeven(int p, int q)
{
if(p>q)
return 1;
else if (p%2==0)
{
    printf("%d ",p);
}
return oddeven(p+1,q);
}

int main()
{
int a,b;
printf("from a to b :");
scanf("%d%d",&a,&b);

oddeven(a,b);

    return 0;
}