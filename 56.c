#include<stdio.h>
int main()
{
int a[2][2],b[2][2];
printf("first :\n");
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("enter value : ");
        scanf("%d",&a[i][j]);
    }
    
}
printf("second :\n");
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("enter value : ");
        scanf("%d",&b[i][j]);
    }
    
}
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("%d",a[i][j]+b[i][j]);
    }
    printf("\n");
}


    return 0;
}