#include<stdio.h>
int main()
{
	FILE *fp;                     //File Pointer
	char a[10];
	fp=fopen("sample.txt","r");   //Opening a File in Read mode

	if(fp==NULL)
		perror("Error:");
  else
  {
    while(1)
    {
      if(!feof(fp))
      {
          fgets(a,10,fp);   //Reading stream of chars from the File
          printf("%s",a);
      }
      else
      {
        break;
      }
    }
  }
	fclose(fp);             //Closing the File
	return 0;
}
