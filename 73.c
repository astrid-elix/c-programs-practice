#include <stdio.h>
int main()
{
    int a, b = 0, c = 1, d;
    printf("enter number  :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("%d", b);
        break;
    case 2:
        printf("%d", c);
        break;
    default:
        for (int i = 0; i < a - 2; i++)
        {
            d = b + c;
            b = c;
            c = d;
        }
        printf("%d", c);
        break;
    }
    return 0;
}