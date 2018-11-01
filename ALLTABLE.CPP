#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();

int t,b,c;

printf("\n\n\t\t WELCOME TO THE TABLE COUNTER . \n\n\t\t MADE BY : M . AWAIS SHAIKH \n\n\t\tSTUDENT OF IQRA UNIVERSITY MAIN CAMPUS DEFENCE KARACHI \n\n\t\t BS - COMPUTER SCIENCES");
getch();
clrscr();
printf("\n\n\t\t ENTER WHICH TABLE YOU WANT : ");
scanf("%d",&t);


for(b=0;b<=15;b++)
{
printf("\n\t\t %d x %d = %d",t,b,t*b);

}





getch();
}
