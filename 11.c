#include<stdio.h>
int main()
{
FILE *f;
char c;
int a=1;
f=fopen("1.txt","r");
for ( ; c!=EOF; )
{
     if (c=='\n')
    {
       a++;
    }
    
    c=getc(f);
    printf("%c",c);
   
}
printf("\nnumber of line :%d",a);




fclose(f);

    return 0;
}