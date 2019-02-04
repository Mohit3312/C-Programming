#include<stdio.h>
#include<conio.h>

main()
{
    char ch;
    FILE *fp;
    fp=fopen("writing.txt","r");

    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }

    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    getch();
}
