#include<stdio.h>

int copy(char a[],int i)
{
char c[20];
c[i]=a[i];
if (c[i]=='\0')
{
    
    return c[20];
}


copy(a,i+1);
}
int main()
{
char a[20],b[20];
printf("enter string :");
scanf("%s",a);

 b[20]=copy(a,0);
printf("%s",b);
    return 0;
}