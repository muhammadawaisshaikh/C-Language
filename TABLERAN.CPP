#include<conio.h>
#include<stdio.h>
void main()

{
clrscr();

int a,b,c,d;

printf("\n\n\t\t ENTER THE TABLE YOU WANT : ");
scanf("%d",&a);

printf("\n\n\t\t ENTER THE RANGE FROM WHERE TOU WANT TO START  : ");
scanf("%d",&c);

printf("\n\n\t\t ENTER THE RANGE FROM WHERE YOU WANT TO END : ");
scanf("%d",&d);



for(b=c;b<=d;b++)

{
printf("\n\n\t\t %d x %d = %d", a,b,a*b);

}





getch();
}
