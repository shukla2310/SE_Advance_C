
 #include<stdio.h>
 
 struct Employee
 {
 		int eid;
 		char ename[30];
 		float salary;
 }E[3];
 
 main()
 {
 		int i;
	 
	 	for(i=0;i<3;i++)
	 	{
	 		printf("\n\n ................Employee [%d]...........",i);
	 		printf("\n\n Employee ID   [%d] : ",i);
			scanf("%d",&E[i].eid);
			printf("\n\n Employee's  Name      : ");
			scanf("%s",&E[i].ename);
			printf("\n\n Employee's  Salary    :  ");
			scanf("%f",&E[i].salary);
				
		}	
		
		for(i=0;i<3;i++)
	 	{
	 		printf("\n\n ................Employee [%d]...........",i);
	 		printf("\n\n Employee ID   [%d]   :  %d",E[i].eid);
			printf("\n\n Employee's  Name      : %s",E[i].ename);
			printf("\n\n Employee's  Salary    :  %.2f",E[i].salary);		
		}	
 }
