#include<stdio.h>
#include<conio.h>

int main()
{

    char str[20];
    FILE *fp;
    fp=fopen("writing.txt","a");
    printf("Enter your name");
    gets(str);

    fputs(str,fp);
    fclose(fp);
    getch();
    return 0;
}
