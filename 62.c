#include <stdio.h>
int largesmall(int b[])
{
    int c;
    for (int i = 0; i < 5; i++)
    {
        if (b[0] > b[i])
        {
            c = b[i];
            b[i] = b[0];
            b[0] = c;
        }
        if (b[1] < b[i])
        {
            c = b[i];
            b[i] = b[1];
            b[1] = c;
        }
    }
    printf("min=%d", b[0]);
    printf("max=%d", b[1]);
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value for %d:", i);
        scanf("%d", &a[i]);
    }
    largesmall(a);
    return 0;
}