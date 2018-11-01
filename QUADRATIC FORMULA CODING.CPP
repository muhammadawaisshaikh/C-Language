#include<conio.h>
#include<stdio.h>
#include<dos.h>

void main()
{
textbackground(RED);
clrscr();

int a,b,c;
int dis;  // dis=discriminant
int x1,x2;


printf("\n\n\n\t\t WELCOME TO THE PROGRAMME MADE BY MUHAMMAD AWAIS SHAIKH ");
printf("\n\n\n\t\t SON OF MUHAMMAD IQBAL SHAIKH ");
printf("\n\n\n\t\t STUDENT OF SUKKUR IBA [SIBA] ");
printf("\n\n\n\t\t BS - SOFTWARE ENGINEERING ");
printf("\n\n\n\t\t [ BS - S.E ] ");
printf("\n\n\n\t\t *_*_*_*_*_*_*_*_*_*_*_*_* ");


printf("\n\n\n\t\t PRESS ENTER KEY TO CONTINUE (: ");
getch();

clrscr();
printf("\n\n\tENTER THE VALUE OF A =");
scanf("%d",&a);

printf("\n\n\tENTER THE VALUE OF B =");
scanf("%d",&b);

printf("\n\n\tENTER THE VALUE OF C =");
scanf("%d",&c);


dis=((b*b)-4*a*c)/2;

printf("\n\n\t DISCRIMINANT = %d",dis);

if(dis<=0|dis>=0)
{


if(dis>0)
{
printf("\n\n\t\t PLEASE WAIT ");
sleep(1);
printf(".");
printf("\n\n\t ROOTS ARE REAL , HAVING 2 REAL SOLUTIONS ");
}

if(dis<0)
{

printf("\n\n\t\t PLEASE WAIT ");
sleep(1);
printf(".");
printf("\n\n\t ROOTS AREN'T REAL / IMAGENARY , HAVING NO REAL SOLUTIONS ");

}


if(dis==0)
{

printf("\n\n\t\t PLEASE WAIT ");
sleep(1);
printf(".");
printf("\n\n\t ROOTS ARE EQUAL / PERFECT SQUARE , HAVING 1 REAL SOLUTIONS ");
}



if(dis>=0)
{
clrscr();
printf("\n\n\t\t PLEASE WAIT FOR ANSWERS OF THE SOLUTION .");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");



printf("\n\n\n\t\tX 1 = -b + (b^2 - 4*a*c) / 2a");
x1=-b+dis/2*a;
printf("\n\n\t\t THE VALUE OF X 1 = %d",x1);


printf("\n\n\n\n\t\tX 2 = -b - (b^2 - 4*a*c) / 2a");
x2=-b-dis/2*a;
printf("\n\n\t\t THE VALUE OF X2 = %d",x2);
}
}
else
{
printf("\n\n\t\t INVALID VALUES\n\n\tWARN!NG : PLEASE PRESS VALID VALUES");
}




getch();
}