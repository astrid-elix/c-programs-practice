#include <stdio.h>
int fact(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {

        return a * fact(a - 1);
    }
}
int main()
{
    int a;
    printf("enter a number for factorial:");
    scanf("%d", &a);
    int f = fact(a);
printf("factorial of number is :%d",f);
    return 0;
}