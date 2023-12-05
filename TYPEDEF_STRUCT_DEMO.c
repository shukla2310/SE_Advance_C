
 
 #include<stdio.h>
 
 typedef struct Person 
 {
 	int id;
 	char name[30];
	char city[20];
	float salary;
 }Per;
 
 main()
 {
 	Per p1;
 	
 	p1.id=101;
 	strcpy(p1.name,"Rajesh Kumar");
 	strcpy(p1.city,"Ahmedabad");
 	p1.salary=25000;
 	
 	printf("\n\n Person : 1");
 	printf("\n ..............................\n");
 	printf("\n Person Id     : %d",p1.id);
 	printf("\n\n Person Name   : %s",p1.name);
	printf("\n\n Person City   : %s",p1.city); 
	printf("\n\n Person Salary : %.2f",p1.salary);	
 }
 
 
 
