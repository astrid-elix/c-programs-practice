#include<stdio.h>
int main()
{
FILE *fl;
char c;
int ch=0,w=0;
fl=fopen("1.txt","r");
for (; c!=EOF; )
{
    if (c==' '||c=='\n')
    {
        w++;
    }
    
    ch++;
    c=fgetc(fl);

}
printf("total char :%d",ch-1);
printf("\ntotal word :%d",w+1);

fclose(fl);
    return 0;
}