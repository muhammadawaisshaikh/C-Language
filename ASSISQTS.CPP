#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
clrscr();
int a,no,ser,sqn,cub;
float s1;

printf("\n\n\t\t *^*^*^*SQUARE ROOT , SQUARE , CUBEROOT SPECIFIER *^*^*^");

printf("\n\n\t\t ENTER ANY INTIGER :- ");
scanf("%d",&no);


 sqn=pow(no,2);
 cub=pow(no,3);
 s1=sqrt(no);

 printf("\n\n\t\t+*^+*^+^*+*^+*^+*^+*^+*^+*^+*^+*^+*^+*^+*^");
 printf("\n\n\t\t+*^  SQUARE\tSQUAREROOT\tCUBE");
 printf("\n\n\t\t+*^  \n\n\t\t+*^\t%d\t%f\t%d",sqn,s1,cub);
 printf("\n\n\n\t\t+*^+*^+^*+*^+*^+*^+*^+*^+*^+*^+*^+*^+*^+*^");



















getch();
}

