#include<stdio.h>
#include<string.h>
int main()
{
char a[10],c[10]={"hii"};
int b=0, d=0;
printf("enter string :");
scanf("%s",a);
for (int i = 0; a[i] != '\0'; i++)
{
    printf("1");
}

while (a[b]!='\0')
{
    
printf("1");
   b++;
}
printf("\n");
for (int i = 0; a[i]!= '\0'; i++)
{
 if (c[i]==a[i])
 {
    d++;
 }
 
   }

   if (d==strlen(c))
   {
    printf("ther are equal\n");
   }
   else{
    printf("not equal\n");
   }
   int z=strcmp(a,c);
if (z==0)
{
   printf("equal");
}
else{
    printf("no equal");
}


    return 0;
}