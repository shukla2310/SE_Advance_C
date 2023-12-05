
 #include<stdio.h>
 
 struct Person
 {
 	int id;
 	char name[30];
	char city[20];
	float salary;
 };
 
 main()
 {
 	struct Person P;
 	
 	P.id=101;
 	strcpy(P.name,"Rajesh Kumar");
 	strcpy(P.city,"Ahmedabad");
 	P.salary=25000;
 	
 	printf("\n\n Person : 1");
 	printf("\n ..............................\n");
 	printf("\n Person Id     : %d",P.id);
 	printf("\n\n Person Name   : %s",P.name);
	printf("\n\n Person City   : %s",P.city); 
	printf("\n\n Person Salary : %.2f",P.salary);	
 }
 
 
