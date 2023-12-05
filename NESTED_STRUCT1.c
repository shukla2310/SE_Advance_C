 
 #include<stdio.h>
 
 struct Department    
 {
 		int dept_id;
 		char dept[30];
 
 
 		struct Employee    
 		{
 			int eid;
 			char ename[30];
 			float salary;  
 		}Emp;
 		
 }Dept;
 
 main()
 {
 
 	Dept.Emp.eid=101;
 	strcpy(Dept.Emp.ename,"Mr. A. A. Shukla");
 	Dept.Emp.salary=33000;
 	Dept.dept_id=1;
 	strcpy(Dept.dept,"Purchase");
 	
 	printf("\n\n ...........Details From Employee Structure............");
 	printf("\n\n Employee's Id        : %d",Dept.Emp.eid);
 	printf("\n\n Employee's Name      : %s",Dept.Emp.ename);
 	printf("\n\n Employee's Salary    : %.2f",Dept.Emp.salary);
 	
 	printf("\n\n ...........Details From Department Structure............");
 	printf("\n\n Department's Id      : %d",Dept.dept_id);
 	printf("\n\n Department's Name    : %s",Dept.dept);
 	
 	
 }
 
 
