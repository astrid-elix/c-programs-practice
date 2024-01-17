#include<stdio.h>
int main()
{
char a='a' ,*b;
b=&a;
for (; *b <= 'z'; b++)
{
printf("%c",*b);
}

    return 0;
}