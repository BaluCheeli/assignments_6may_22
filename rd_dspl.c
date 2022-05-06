#include<stdio.h>

int main()
{
FILE *fp;
char ch;
fp=fopen("1file.txt","r");

if(fp==NULL)
{
printf("FILE IS NOT CREATED\n");
}

printf("file opened succesfully\n");

do
{
ch=fgetc(fp);

putchar(ch);

}while(ch!=EOF);

fclose(fp);
return 0;
}
