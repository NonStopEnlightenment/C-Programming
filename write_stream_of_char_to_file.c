#include<stdio.h>
int main()
{
	FILE *fp;       //File Pointer
	char a[100];
	fp=fopen("sample.txt","w");   //Creating a new File

	if(fp==NULL)
	{
		perror("Error:");
	}
	else
	{
    	scanf("%[^\n]",a);
    	fputs(a,fp);          //Writing content to the file
	}
	fclose(fp);               //Closing the File
	return 0;
}
