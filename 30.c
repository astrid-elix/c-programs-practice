#include<stdio.h>
int test(int a)
{
    int i=0;
if (a==10)
{
return a;
}
else {
 test(a+1);

}



}
int main()
{
int a=5;
int c=test(a);
printf("%d",c);
}