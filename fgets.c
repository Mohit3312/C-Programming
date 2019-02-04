#include<stdio.h>
#include<conio.h>

main()
{
    char str[11];
    FILE *fp;
    fp=fopen("writing.txt","r");

    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }

    while(fgets(str,12,fp)!=NULL)
    {
        printf("%s",str);
    }

    fclose(fp);
    getch();
}
