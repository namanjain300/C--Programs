#include<stdio.h>
#include<conio.h>
int main()
{
int x,*p;
printf("Enter the value:");
scanf("%d",&x);
p=&x;
printf("Value of variable is %d",*p);
printf("\nAddress of p is %u",&x);
getch();
return 0;
}
