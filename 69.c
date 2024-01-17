#include <stdio.h>
#include <string.h>
int main()
{
    char a[25], b[25];
    scanf("%s", a);
    scanf("%s", b);
    int c = strlen(a);
    printf("string lenth is : %d\n", c);

    if (strcmp(a, b) == 0)
    {
        printf("same ");
    }
    else
    {
        printf("not same");
    }
    printf("\n%s", strrev(b));
    printf("\n%s", strcat(a, b));

    return 0;
}