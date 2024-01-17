#include <stdio.h>
int f(int n, int a, int b)
{
    int c;
    if (n == 0)
    {
        return b;
    }
    c = a + b;
    a = b;
    b = c;

    f(n - 1, a, b);
}
int main()
{
    int a, b = 0, c = 1, x;
    printf("enter num :");
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
        x = f(a - 2, b, c);
        printf("%d", x);
        break;
    }

    return 0;
}