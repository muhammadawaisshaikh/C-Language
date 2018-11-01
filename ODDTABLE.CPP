#include<conio.h>
#include<stdio.h>
void main()

{
clrscr();
int a,b ;




printf("\n\n\t\t enter the table u want : ");
scanf("%d",&a);

for(b=0;b<=10;b+=3)
{

printf("\n\n\t\t %d x %d = %d" , a,b,a*b);

}







getch();
}
