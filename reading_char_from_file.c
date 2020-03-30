#include<stdio.h>
int main()
{
	FILE *fp;			//File Pointer
	char c;
	fp=fopen("sample.txt","r");	//Openning the File in read mode

	if(fp==NULL)
	{
		perror("Error");
	}
	else
	{
		while(1)
		{
				c=fgetc(fp);	//reading char by char from the file
				if(!feof(fp))
				{
					printf("%c",c);
				}
				else
				{
					break;
				}
		}
	}
	fclose(fp);			//Closing the file
	return 0;
}


