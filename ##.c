#include<stdio.h>
#include<conio.h>
#define ACTION(a,b) a##b+a*b

void main()
{
    printf("%d",ACTION(3,4));
    getch();
}
