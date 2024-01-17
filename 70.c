#include <stdio.h>
int main()
{
    int a, b;
    FILE *f;
    f = fopen("pass.txt", "r");
    fscanf(f, "%d", &a);
    printf("enter password :");
    scanf("%d", &b);
    if (b == a)
    {
        printf("password clear\n");
    }
    fclose(f);
    f = fopen("pass.txt", "w");
    printf("change password:");
    scanf("%d", &a);
    fprintf(f, "%d", a);
    fclose(f);
}