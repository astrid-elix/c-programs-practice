#include<stdio.h>
int main()
{
for (int i = 0; i < 5; i++)
{
    for (int k = 5; k>i ; k--)
    {
       printf(" ");
    }
    
 for (int j = 0; j <= i; j++)
 {
printf(" *");
 }
  printf("\n");

}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j <= i; j++)
    {
        printf(" ");
    }
    
 for (int l = 5; l > i ; l--)
{
    printf(" *");
}
printf("\n");
}




}