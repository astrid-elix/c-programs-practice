#include<stdio.h>
#include<stdlib.h>
int changepassw(int *a)
{
 

}
int main()
{
int pass,orignalpass;
    FILE *passw;
    start:
    passw=fopen("pass.txt","r");

printf("Enter login pass :");
scanf("%d",&pass);
fscanf(passw,"%d",&orignalpass);
fclose(passw);
if (pass==orignalpass)
{
   printf("correct pass word :)\n");
}
else
{
    printf("wrong password !!!!\n");
    goto start;
}
system("cls");
printf("Buying Options :\n");

    return 0;
}