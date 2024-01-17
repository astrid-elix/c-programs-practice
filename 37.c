#include<stdio.h>
struct student
{
char n[20];
int roll;
};

int main()
{
struct student a[3];
for (int i = 0; i < 3; i++)
{
    printf("enter name :");
scanf("%s",a[i].n);
printf("Roll no. :");
scanf("%d",&a[i].roll);
}
FILE *f;
f=fopen("1.txt","w");
for (int i = 0; i < 3; i++)
{
    fprintf(f,"student no %d.\n",i);
    fprintf(f,"name : %s\n",a[i].n);
    fprintf(f,"roll : %d\n",a[i].roll);
}

fclose(f);
    return 0;
}