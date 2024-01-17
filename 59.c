#include <stdio.h>
int main()
{
    int math, phy, chem, bio, computer, percentage, sum;
    printf("enter your marks in maths :");
    scanf("%d", &math);
    printf("enter your marks in phy :");
    scanf("%d", &phy);
    printf("enter your marks in chem :");
    scanf("%d", &chem);
    printf("enter your marks in bio :");
    scanf("%d", &bio);
    printf("enter your marks in computer :");
    scanf("%d", &computer);
    sum = math + phy + bio + chem + computer;
    percentage = sum * 100 / 500;
    printf("percentage : %d\n", percentage);
    printf("your grade :");
    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 40)
    {
        printf("Grade E");
    }
    else if (percentage < 40)
    {
        printf("Grade F");
    }
    return 0;
}