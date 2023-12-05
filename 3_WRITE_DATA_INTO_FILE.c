#include<stdio.h>
main()
{
	FILE *fptr;
	char data[50]="This is a demo file for file management. ";
	
	fptr=fopen("DemoFile.txt","w");
	
	if( fptr==NULL )
	{
		printf("\n\n DemoFile.txt is faled to Open..");
	}
	
	else
	{
		printf("\n\n File is now opened...");
		
		if(fptr!=EOF)
		{
			fputs(data, fptr);
			fputs("\n",fptr);
		}
		
		fclose(fptr);
		printf("\n\n Data successfully written in file..");
		printf("\n\n File is now closed..");
	}
}




