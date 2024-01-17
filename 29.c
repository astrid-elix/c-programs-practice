#include<stdio.h>
int prime(int p,int b)
{
if (b==1)
{
    return 1;
}
else if (p%b==0)
{
    return 2;
}
else{

    prime(p,b-1);
}

}

int main()
{
int a,b;
printf("Enter value :");
scanf("%d",&a);
b=a/2;
int c=prime(a,b);
if (c==1)
{
   printf("prime");
}
else
{
    printf("not prime");
}



    return 0;



}