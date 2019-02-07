#include<stdio.h>
#include<conio.h>

main()
{
    register int x=4;

    int y;

    y=x++;

    x--;

    y=x+5;

    printf("%d\n%d\n",x,y);

    getch();
}
