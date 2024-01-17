#include <stdio.h>
int main()
{
    int a[5], *b[5], c;
    for (int i = 0; i < 5; i++)
    {
        printf("enter value %d: ", i);
        scanf("%d", &a[i]);
        b[i] = &a[i];
    }
    for (int j = 0; j < 5; j++)
    {
        if (*b[0] > *b[j])
        {
            c = *b[j];
            *b[j] = *b[0];
            *b[0] = c;
        }
    }
    printf("min vale in array : %d\n", *b[0]);
    for (int j = 0; j < 5; j++)
    {
        if (*b[0] < *b[j])
        {
            c = *b[j];
            *b[j] = *b[0];
            *b[0] = c;
        }
    }
    printf("max value will be :%d", *b[0]);
    return 0;
}