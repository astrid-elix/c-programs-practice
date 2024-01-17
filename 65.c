#include <stdio.h>
int main()
{
    FILE *f;
   

    f = fopen("2.txt", "r");
    int a;
    for (; !feof(f);)
    {
     
        fscanf(f, "%d", &a);
        if (a % 2 == 0)
        {
            printf("%d ", a);
        }
    }

    return 0;
}