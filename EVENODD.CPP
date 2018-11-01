#include<conio.h>
#include<stdio.h>
void main()

{
clrscr();
int a,b,c;

printf("\n\n\t\t enter starting range : ");
scanf("%d",&a);
printf("\n\n\t\t enter ending range : ");
scanf("%d",&b);


printf("\n\n\t\t\t ODD   : \t  EVEN");

for(c=a;c<=b;c+=2)
{
printf("\n\n\t\t\t %d",c);

int f = c+1;
printf("\t\t %d",f);

}








getch();
}
