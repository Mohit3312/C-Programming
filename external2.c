int x;
main()
{
    printf("x=%d\n",x);
    f1();
    printf("x=%d\n",x);
    getch();
}

void f1()
{
    int x=5;
    x++;
    printf("x=%d\n",x);
}
