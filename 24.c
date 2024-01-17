#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
printf("enter a string :");
scanf("%s",a);
for ( int i = 0; i < 20; i++)
{
for (char j = 'A';  j<= 'Z'; j++)
{
    if (a[i]==j)
    {
      printf("%c",a[i]);
    }
    
}

  
  
    
}



    return 0;
}