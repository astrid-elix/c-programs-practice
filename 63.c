#include<stdio.h>
int main()
{
int n;
printf("Number of student :");
scanf("%d",&n);
char name[35];
int marks;
FILE *f;
f=fopen("2.txt","w");
for (int i = 0; i < n; i++)
{printf("student detail %d\n",i+1);
fprintf(f,"student detail %d\n",i+1);
    printf("name : ");
    scanf("%s",name);
    printf("marks : ");
    scanf("%d",&marks);
fprintf(f,"name:%s\nmarks:%d\n",name ,marks);
}
fclose(f);

    return 0;
}