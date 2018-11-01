#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
 textbackground(RED);
 clrscr();

 int dist;

 int t_m;
 int t_f;
 int t_i;
 int t_cm;

 int num1;
 int num2;


  printf("\n\n\n\t\t_*_*_*_*_*_*_*_*_*_*_*_*_");
  printf("\n\n\t\tWELCOME TO THE DISTANCE CONVERTER");
  printf("\n\n\n\t\t_*_*_*_*_*_*_*_*_*_*_*_*_");

  printf("\n\n\t\t\t***************************");



  printf("\n\n\t\tENTER YOUR DISTANCE IN KILOMETERS = ");
  scanf("%d",&dist);


  t_m=dist*1000;
  sleep(1);
  printf("\n\n\t\tDISTANCE IN METERS = %d",t_m);

   t_f=dist*3,280.8;
  sleep(1);
  printf("\n\n\t\tDISTANCE IN FEETS = %d",t_f);


  t_i=dist*39,370;
  sleep(1);
  printf("\n\n\t\tDISTANCE IN INCHES = %d",t_i);


  t_cm=dist*100000;
  sleep(1);
  printf("\n\n\t\tDISTANCE IN CENTIMETERS = %d",t_cm);


   sleep(1);
  printf("\n\n\t\t THANKYOUFOR USING DISTANCE CONVERTER \n\n\t\t MADE BY : MUHAMMAD AWAIS SHAIKH");


getch();

}