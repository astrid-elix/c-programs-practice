#include <stdio.h>

float large(int ac[], int b)
{
    static float d = -9999.99;
    if (b < 3)
    {
        if (ac[b] > d)
        {
            d = ac[b];
        }
        return large(ac, b + 1);
    }
    return d;
}

float small(float a[], int b)
{
    static float c = 9999.99;
    if (b < 3)
    {
        if (a[b] < c)
        {
            c = a[b];
        }
        return small(a, b + 1);
    }
    
    return c;
}

int main()
{
    float a[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter value :");
        scanf("%f", &a[i]);
    }

    float b = small(a, 0);
    float x = large(a, 0);
    printf("small = %f\n", b);
    printf("big = %f", x);

    return 0;
}
