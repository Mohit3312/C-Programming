#include<stdio.h>
#include<conio.h>

#define PI 3.14

int main()

{

  int r;

  float a;

  printf("Enter a radius of a circle");

  scanf("%d",&r);

  a=PI*r*r;

  printf("Area of circle is %f",a);

  getch();

}
