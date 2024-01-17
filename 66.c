#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value :");
        scanf("%d", &a[i]);
    }
    for (int i = 5; i > 0; i--)
    {
        printf("%d ",a[i-1]);
    }

    return 0;
}