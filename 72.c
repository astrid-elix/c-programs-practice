#include <stdio.h>
int natural(int a, int b)
{
    static int add = 0;
    if (a == 0)
    {
        return add;
    }
    else
    {
        add += b;
        natural(a - 1, b + 1);
    }
}
int main()
{
    int a;
    printf(" sum natural number from 1 to : ");
    scanf("%d", &a);

    int x = natural(a, 1);
    printf("sum:%d", x);
    return 0;
}