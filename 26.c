#include<stdio.h>
#include <string.h>
 #include <ctype.h> 
char capital(char b[],int i )
{



 
if (isupper(b[i]))
{
  return b[i];
}
else{
    return capital(b,i+1);
}

}
int main()
{
char a[20];
scanf("%s",a);
char ch =capital(a,0);
printf("%c",ch);
    return 0;
}