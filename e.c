#include<stdio.h>
struct e1
{
   int hr ,watt,wpr;
};


int main()
{
    int apl=0;
    int a;
    printf("enter total appliance :");
    scanf("%d",&a);
struct e1 t[a];
for (int j = 0; j < a; j++)
{
    printf("watt of appliance %d : ",j+1);
    scanf("%d",&t[j].watt);
    printf("total hr of appliance %d : ",j+1);
    scanf("%d",&t[j].hr);
}
printf("watt peak rating : ");
scanf("%d",&t[0].wpr);

for (int i = 0; i < a; i++)
{
    apl+=t[i].hr*t[i].watt;
    
}
printf("Total appliances energy use : %d wh\n",apl);
printf("Total PV module  energy nedded : %f wh\n",(float)apl*1.3);
printf("watt peak of pv module : %f watt\n",((float)apl*1.3)/3.4);
float wattp=((float)apl*1.3)/3.4;
float watt2=wattp/(float)t[0].wpr;
if (watt2-(int)watt2>=0.5)
{
   watt2+=1;
}

printf("Total number of pv module : %d modules\n",(int)watt2);
int twatt=0;
for (int k = 0; k < a; k++)
{
    twatt+=t[k].watt;
}
printf("Total watt : %d watt\n",twatt);
int inv=0.3*twatt+twatt;
for (int i = 1; ; i++)
{
    inv+=1;
    if (inv%10==0)
    {
        break;
    }
    
}

printf("inverter should be more than this : %f\n",(float)inv);
printf("Batery capacity : %f or more \n",(float)apl*0.5*0.85*0.6*12);
printf("solar charge controller : %f",(7.5*wattp/(float)t[0].wpr)*1.3);

return 0;
}