#include <stdio.h>
int main()
{
    int a[5], *b[5], c;
    for (int i = 0; i < 5; i++)
    {
        printf("enter value : ");
        scanf("%d", &a[i]);
        b[i] = &a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*b[i] < *b[j])
            {
                c = *b[j];
                *b[j] = *b[i];
                *b[i] = c;
            }
        }
    }
printf("min value: %d\n",*b[0]);
printf("min value: %d",*b[4]);
    return 0;
}