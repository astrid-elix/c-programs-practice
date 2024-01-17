#include<stdio.h>
char same(char a[],char b[], int c)
{
b[c]=a[c];
if (b[c]=='\0')
{
 return b[20];
}

same(a,b,c+1);

}
int main()
{
char a[20],b[20];
printf("1st string :");
scanf("%s",a);

same(a,b,0);
  printf("%s",b);
    return 0;
}