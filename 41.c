#include<stdio.h>

int large(int b[],int c)
{
   static int  max=-999;
if (c<5)
{
 if (max<b[c])
 {
max=b[c];
 }
 
 large(b,c+1);
 
   
}
return max;

}
int main()
{
int a[5];
for (int i = 0; i < 5; i++)
{
    printf("enter value :");
    scanf("%d",&a[i]);
   
}

 int max=large(a,0);
 printf("%d",max);
    return 0;
}