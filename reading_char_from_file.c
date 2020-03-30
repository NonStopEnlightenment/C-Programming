#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("sample.txt","r");

	if(fp==NULL)
	{
		perror("Error");
	}
	else
	{
		while(1)
		{
				c=fgetc(fp);
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
	fclose(fp);
	return 0;
}


