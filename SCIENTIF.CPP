#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(void)
{
textbackground(BLUE);
clrscr();

int a,b,c,d,e,fh,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;

printf("\n\n\n\t\t WELCOME TO THE CALCULATOR \n\n\t\tMADE BY | MUHAMMAD AWAIS SHAIKH . \n\n\n\n\t\t\t\t\t\tpress enter to continue");

getch();
clrscr();

printf("\n\n\n\t\t press 1 for addition");
printf("\n\n\t\t press 2 for subtraction");
printf("\n\n\t\t press 3 for multiplication");
printf("\n\n\t\t press 4 for division");
printf("\n\n\t\t press 5 for sin(x)");
printf("\n\n\t\t press 6 for cos(x)");
printf("\n\n\t\t press 7 for tan(x)");
printf("\n\n\t\t press 8 for cosec(x)");
printf("\n\n\t\t press 9 for sec(x)");
printf("\n\n\t\t press 10 for cot(x)");
printf("\n\n\n\n\n\t\t ENTER YOUR CHOICE :---");
scanf("%d",&a);


if(a==1)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ ADDITION +_+_+_+__+");
printf("\n\n\n\t\t ENTER 1ST NUMBER :");
scanf("%d",&b);
printf("\n\n\n\t\t ENTER 2ND NUMBER :");
scanf("%d",&c);
d=b+c;
printf("\n\n\n\t\t %d + %d = %d ", b,c,d);


}
if(a==2)
{
clrscr();  int f ,h;

printf("\n\n\n\t\t +_+_+_+ SUBTRACTION +_+_+_+__+");
printf("\n\n\n\t\t ENTER 1ST NUMBER :");
scanf("%d",&e);
printf("\n\n\n\t\t ENTER 2ND NUMBER :");
scanf("%d",&f);
int g =e-f;
printf("\n\n\n\t\t %d - %d = %d ", e,f,g);
}
if(a==3)
{
clrscr();
int h1;
printf("\n\n\n\t\t +_+_+_+ MULTIPLICATION +_+_+_+__+");
printf("\n\n\n\t\t ENTER 1ST NUMBER :");
scanf("%d",&h1);
printf("\n\n\n\t\t ENTER 2ND NUMBER :");
scanf("%d",&i);
int j =h1-i;
printf("\n\n\n\t\t %d - %d = %d ", h1,i,j);
}

if(a==4)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ DIVISION +_+_+_+__+");
printf("\n\n\n\t\t ENTER 1ST NUMBER :");
scanf("%d",&k);
printf("\n\n\n\t\t ENTER 2ND NUMBER :");
scanf("%d",&l);
float m =k/l;
printf("\n\n\n\t\t %d / %d = %.2f ", k,l,m);
}

if(a==5)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ SIN(X) +_+_+_+__+");
printf("\n\n\n\t\t ENTER NUMBER :");
scanf("%d",&m);
float g1 =sin(m);
printf("\n\n\n\t\t sin(%d) = %.2f", m,g1);
}

if(a==6)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ COS(X) +_+_+_+__+");
printf("\n\n\n\t\t ENTER NUMBER :");
scanf("%d",&n);
float i1 =cos(n);
printf("\n\n\n\t\t COS(%d) = %.2f", n,i1);
}

if(a==7)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ TAN(X) +_+_+_+__+");
printf("\n\n\n\t\t ENTER NUMBER :");
scanf("%d",&p);
float j1 =tan(p);
printf("\n\n\n\t\t tan(%d) = %.2f", p,j1);
}

if(a==8)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ COSEC(X) +_+_+_+__+");
printf("\n\n\n\t\t ENTER NUMBER :");
scanf("%d",&q);
float k1 =sin(m);
printf("\n\n\n\t\t cosec(%d) = %.2f", q,k1);
}
if(a==9)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ sec(X) +_+_+_+__+");
printf("\n\n\n\t\t ENTER NUMBER :");
scanf("%d",&r);
float l1 =sin(r);
printf("\n\n\n\t\t sec(%d) = %.2f", r,l1);
}

if(a==10)
{
clrscr();
printf("\n\n\n\t\t +_+_+_+ cot(X) +_+_+_+__+");
printf("\n\n\n\t\t ENTER NUMBER :");
scanf("%d",&s);
float m1 =sin(s);
printf("\n\n\n\t\t sin(%d) = %.2f", s,m1);
}






































































































getch();
}