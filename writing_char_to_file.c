#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("sample.txt","w");
	if ( fp == NULL)
  {
    perror("Error:");
  }
  else
	{
		while((c=getchar())!='*')
			fputc(c,fp);
	}
	fclose(fp);
	return (0);
}
