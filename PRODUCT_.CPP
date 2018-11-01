#include<conio.h>
#include<stdio.h>
int add(int a , int b);
void main()

{
clrscr();

int x , y;

printf("\n\n\t\t enter number :");
scanf("%d",&x);
printf("\n\n\t\t enter number :");
scanf("%d",&y);

int result=add(x,y);

printf("\n\n\t %d  x  %d  = %d",x , y,result);


getch();
}

int add(int a , int b)
{

int c = a*b;
return c;


}