#include<conio.h>
#include<stdio.h>
void main()

{
clrscr();
int a;
int b=0;

printf("\n\n\t\t ENTER TABLE U WANT : ");
scanf("%d",&a);

while(b<=10)
{
printf("\n\t\t\t %d x %d = %d", a,b,a*b);
b++;

}






getch();
}