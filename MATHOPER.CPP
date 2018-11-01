#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>
void main(void)
{
textbackground(RED);
clrscr();
cout<<"\n\n\n\t\t-=-WELCOME TO THE MATHAMATICS OPERATION PERFORMER";
cout<<"\n\n\t\t=-=MADE BY M . AWAIS SHAIKH";
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t PRESS ENTER KEY TO CONTINUE ......";

getch();
clrscr();

cout<<"\n\n\n\t\t press 1 for root";
cout<<"\n\n\n\t\t press 2 for power";
cout<<"\n\n\n\t\t press 3 for percent";
//cout<<"\n\n\n\t\t press 1 for root";
int a,b;

cout<<"\n\n\n\t\t ENTER YOUR CHOICE : ";
cin>>a;


if(a==1)
{
clrscr();
cout<<"\n\n\n\t\t +_+_+_+  WELCOME TO THE ROOT AREA  _+_+_+_";
cout<<"\n\n\n\t\t enter the number :";
cin>>b;
int c=b/2;
printf("\n\n\n\t\t number = %d",b);
printf("\n\n\n\t\t root of %d = %d",b,c);

}



if(a==2)
{
int b1,c1;

clrscr();
cout<<"\n\n\n\t\t +_+_+_+  WELCOME TO THE POWER AREA  _+_+_+_";
cout<<"\n\n\n\t\t enter the number :";
cin>>b1;
cout<<"\n\n\n\t\t enter the power of number you want to give  :";
cin>>c1;

int d=pow(b1,c1);
printf("\n\n\n\t\t number = %d",b1);
printf("\n\n\n\t\t power of %d = %d", b1,d);

}

if(a==3)
{
float e,f,h;
clrscr();
cout<<"\n\n\n\t\t +_+_+_+  WELCOME TO THE PERCENTAGE AREA  _+_+_+_";
cout<<"\n\n\n\t\t enter the obtained marks :";
cin>>e;

cout<<"\n\n\n\t\t enter the total marks :";
cin>>f;

float g=((e/f)*100);


printf("\n\n\n\t\t obtained marks = %.2f",e);
printf("\n\n\n\t\t total marks = %.2f",f);
printf("\n\n*******************************************\n*");
printf("\n\n\n\t\t PERCENTAGE = %.2f",g);
printf("\n\n**********************************************");
}



















getch();
}