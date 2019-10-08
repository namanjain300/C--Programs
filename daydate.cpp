#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int daytillmonth(int,int);
int leapdays,result,day,month,yrs,dm;
long int totaldays,normaldays;
printf("Enter day,month and year\n");
scanf("%d %d %d",&day,&month,&yrs);
day=day-1;
month=month-1;
normaldays=(yrs-1)*365L;
leapdays=(yrs-1)/4-(yrs-1)/100+(yrs-1)/400;
dm=daytillmonth(month,yrs);
totaldays=normaldays+leapdays+dm+day;
result=totaldays%7;
if(result==0)
printf("today is monday\n");
else if(result==1)
printf("today is tuesday\n");
else if(result==2)
printf("today is wednesday\n");
else if(result==3)
printf("today is thrusday\n");
else if(result==4)
printf("today is friday\n");
else if(result==5)
printf("today is saturday\n");
else if(result==6)
printf("today is sunday\n");
getch();
return 0;
}

int daytillmonth(int month,int yrs)
{
int leap=28;
int ans;
if((yrs%400==0)||((yrs%100!=0)&&(yrs%4==0)))
{
leap=29;
}
if(month==1)
{
ans=31;
}
else if(month==2)
ans=31+leap;
else if(month==3)
ans=31+leap+31;
else if(month==4)
ans=31+leap+31+30;
else if(month==5)
ans=31+leap+31+30+31;
else if(month==6)
ans=31+leap+31+30+31+30;
else if(month==7)
ans=31+leap+31+30+31+30+31;
else if(month==8)
ans=31+leap+31+30+31+30+31+30;
else if(month==9)
ans=31+leap+31+30+31+30+31+30+31;
else if(month==10)
ans=31+leap+31+30+31+30+31+30+31+30;
else if(month==11)
ans=31+leap+31+30+31+30+31+30+31+30+31;
else if(month==12)
ans=31+leap+31+30+31+30+31+30+31+30+31+30;

return ans;
}
