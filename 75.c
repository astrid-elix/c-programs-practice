#include<stdio.h>
int main()
{
int a[2][2],b[2][2];
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("enter value of %d%d :",i,j);
        scanf("%d",&a[i][j]);
    }
    
}
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("enter value second of %d%d :",i,j);
        scanf("%d",&b[i][j]);
    }
    
}
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("%d ",(a[i][j])*5+(b[i][j])*3);
    }
    printf("\n");
}



    return 0;
}