#include<stdio.h>
#include<conio.h>
void main(void)
{
clrscr();

int a,b,c,d;


printf("\n\n\t\t *******THE EVEN AND ODD NUMBER SPECIFIER ***********");

printf("\n\n\n\n\t\t enter starting range :  ");
scanf("%d",&a);

printf("\n\n\t\t enter ending range :  ");
scanf("%d",&b);
printf("\n\n\t even\t:\todd");
for(c=a;c<=b;c++)
{
d=c*2;
int e=(c*2)-1;

printf("\n\t %d\t:\t%d",d,e);

}















getch();
}

