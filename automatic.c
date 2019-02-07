#include<stdio.h>
#include<conio.h>

main()
{
    int x=5;
    printf("%d\n",x);

    {
        int x=2;
        printf("%d\n",x);
    }
    printf("%d\n",x);

    getch();
}
