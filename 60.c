#include <stdio.h>
struct student
{
    int roll, phy, cs;
    char name[30];
};

int main()
{
    struct student a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("For student %d:\n", i);

        printf("Name:");
        scanf("%s", a[i].name);
        printf("Roll no:");
        scanf("%d", &a[i].roll);
        printf("marks in phy and cs :");
        scanf("%d%d", &a[i].phy, &a[i].cs);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("stored value for student %d :\n", i);
        printf("Name=%s\n", a[i].name);
        printf("Roll no.=%d\n", a[i].roll);
        printf("marks in phy and chem.=%d , %d\n", a[i].phy, a[i].cs);
    }

    return 0;
}