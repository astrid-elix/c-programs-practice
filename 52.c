#include<stdio.h>
int main()
{
int a[3],*b[3];
for (int i = 0; i < 3; i++)
{
    printf("enter value : ");
    scanf("%d",&a[i]);
    b[i]=&a[i];
}

for (int i = 2; i >= 0; i--)
{
    printf("%d ",*b[i]);

}


    return 0;
}