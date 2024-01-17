#include<stdio.h>
#include<string.h>
int reverse(char a[],int b)
{
if (b>-1)
{
    printf("%c",a[b]);
    return reverse(a,b-1);
}

}
int main()
{
char s[25];
printf("enter string :");
scanf("%s",s);
int b = strlen(s);
reverse(s,b);
    return 0;
}