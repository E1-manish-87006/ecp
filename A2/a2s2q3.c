/***Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables
DeptNoDept NameDsgnCodeDesignation
10Marketing'M'Manager
20Management'S'Supervisor
30Sales's'Security Officer
40Designing'C'Clerk
Example:
If input given is
Employee Id
: 101
Dept No
: 30
Designation Code
: M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".***/

#include<stdio.h>
int main(){
int ei;
printf("Employee Id:\n");
scanf("%d",&ei);
int dn;
printf("dept no:");
scanf("%d",&dn);
char* deptn;
switch(dn){
case 10:
deptn="Marketing";
break;
case 20:
deptn="Management";
break;
case 30:
deptn="Sales";
break;
case 40:
deptn="Designing";
break;
}
char dc;
printf("designation code:");
scanf("%*c%c",&dc);
char* desc;
switch(dc){
case 'M':
desc="Manager";
break;
case 'S':
desc="Supervisor";
break;
case 's':
desc="Security Officer";
break;
case 'C':
desc="Clerk";
break;
}
printf("Employee with employee id %d is working in %s department as %s",ei,deptn,desc);
return 0;
}
