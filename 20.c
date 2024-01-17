#include<stdio.h>
int same(int b[],int c,int i)
{
if (c==b[i])
{
   printf("number is same");
}
else{

return same(b,c,i+1);
}

}
int main()
{
int a[3],c;
for (int i = 0; i < 3; i++)
{
    printf("enter number in asccending order :");
    scanf("%d",&a[i]);
}
printf("random number : ");
scanf("%d",&c);
same(a,c,0);

    return 0;
}