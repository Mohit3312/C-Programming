#include<stdio.h>
#include<conio.h>

main()
{
    extern int x;
    printf("x=%d\n",x);
    f1();
    printf("x=%d\n",x);
    getch();
}

int x;

void f1()
{
    x++;
    printf("x=%d\n",x);
}
