#include<stdio.h>
int main()
{
FILE *f;
int a=0;
char ch;
f=fopen("2.txt","r");
for (;!feof(f);)
{
    ch=fgetc(f);
    if (ch=='\n')
    {
       a++;
    }
    
}
printf("number of lines are : %d",a+1);


    return 0;
}