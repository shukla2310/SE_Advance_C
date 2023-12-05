 
 #include<stdio.h>
 
 struct Department    //Child structure
 {
 		int dept_id;
 		char dept[30];
 };
 
 struct Employee     //Parent Structure
 {
 	int eid;
 	char ename[30];
 	float salary;
 	
 	struct Department Dept;  //Declaring structure variable for child class here.
 };
 
 main()
 {
 	struct Employee Emp;
 	
 	Emp.eid=101;
 	strcpy(Emp.ename,"Mr. A. A. Shukla");
 	Emp.salary=33000;
 	Emp.Dept.dept_id=1;
 	strcpy(Emp.Dept.dept,"Purchase");
 	
 	printf("\n\n ...........Details From Employee Structure............");
 	printf("\n\n Employee's Id        : %d",Emp.eid);
 	printf("\n\n Employee's Name      : %s",Emp.ename);
 	printf("\n\n Employee's Salary    : %.2f",Emp.salary);
 	
 	printf("\n\n ...........Details From Department Structure............");
 	printf("\n\n Department's Id      : %d",Emp.Dept.dept_id);
 	printf("\n\n Department's Name    : %s",Emp.Dept.dept);
 	
 	
 }
 
 
