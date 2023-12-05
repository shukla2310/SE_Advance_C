
#include<stdio.h>

main()
{
	FILE *fptr;
	char data[40];
	
	fptr=fopen("DemoFile.txt","r");
	
	if(fptr==NULL)
	{
		printf("\n\n DemoFile is failed to open... ");
	}
	
	else
	{
		while(fgets(data,40,fptr)!=NULL)
		{
			printf("%s",data);
		}
		
		fclose(fptr);
		printf("\n\n Data from DemoFile successfully read...");
	}

}




