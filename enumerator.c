#include<stdio.h>
#include<conio.h>

enum month
{
  jan=1,feb,mar,apr,may,jun,jul,aug=9,sep,oct,nov,dec

};

main()
{
  enum month m1,m2,m3,m4,m5;

  m1=jan;
  m2=feb;
  m3=mar;
  m4=aug;
  m5=dec;

  printf("%d\n%d\n%d\n%d\n%d",m1,m2,m3,m4,m5);

  getch();
}
