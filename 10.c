#include<stdio.h>
#include<string.h>
int main()
{
    int c=0;
char a[20],b[20];
printf("first string :");
scanf("%s",a);
printf("second string :");
scanf("%s",b);
for (int i = 0; a[i] != '\0'; i++)
{
 if (a[i]==b[i])
 {
   c++;
 }
 
    
}
if (c==strlen(a))
{
  printf("equal");
}
else{
    printf("not equal");
}


    return 0;
    }