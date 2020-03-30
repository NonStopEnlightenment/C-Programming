#include<stdio.h>
int main()
{
	FILE *fp;				//File Pointer
	char c;
	fp=fopen("sample.txt","w");		//Creating a new file
	if ( fp == NULL)
	{
	    perror("Error:");
	}
  	else
	{
		while((c=getchar())!='*')
			fputc(c,fp);		//Writing char by char to the file
	}
	fclose(fp);	//Closing the File
	return (0);
}
