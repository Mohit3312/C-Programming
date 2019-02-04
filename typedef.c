#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct student
{
  int rollno;
  char name[20];
  int age;

}STUDENT;

void main()
{
  STUDENT s1;

  s1.rollno=34;
  strcpy(s1.name,"MOHIT");
  s1.age=20;

  printf("%d\n%s\n%d",s1.rollno,s1.name,s1.age);
  getch();

}
