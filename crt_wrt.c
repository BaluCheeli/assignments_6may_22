#include<stdio.h>

#define SIZE 100

int main()
{

	 FILE *fp;
	char str[SIZE];

	printf("enter the file data\n");
        scanf("%[^\n]s",str);

              if((fp=fopen("1file.txt","w+"))==NULL)
               {
              printf("not created\n");
	       }

	      else
	      {
		      for(int i=0;str[i]!='\0';i++)
		      {
		      fputc(str[i],fp);
		      }
	      }
	      fclose(fp);

return 0;

}
