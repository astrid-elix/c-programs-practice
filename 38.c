#include<stdio.h>
#include<string.h>
int main()
{

FILE *f;
f=fopen("2.txt","r");
char a[10];
scanf("%d",a);
int q=strlen(a);
char b;
int p=0;
 for (int i=0; b != EOF;i++ )
 {
    
b=fgetc(f);
printf("%c",b);
if (b=='\n')
{
    i=0;
}
else if (a[i]==b && i < q)
{
    p++;
}

 }
 if (p==q)
 {
    printf("your word is in notepad");
 }
 
 fclose(f);



    return 0;
}