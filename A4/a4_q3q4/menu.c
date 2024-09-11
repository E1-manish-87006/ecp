#include<stdio.h>                                                           
 
int menu()
{
int choice; 
printf("0. Exit\n");
printf("1. Add\n");
printf("2. Sub\n");
printf("3. Mul\n");
printf("4. Div\n");
printf("Enter your choice : ");
scanf("%d", &choice);
return choice;
}
                                                                                  
