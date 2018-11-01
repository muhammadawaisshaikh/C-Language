#include<stdio.h>
#include<conio.h>
void iqra(char a,int length);

void main()
{
clrscr();
int length;
char a;
printf("Enter length = ");
scanf("%d",&length);
printf("Enter words = ");
scanf("%s",a);
     iqra(a,length);

     getch();

}

void iqra(char a,int length)
{
for(int i=0;i<length;i++){
printf("\n%s",a);
}
}
