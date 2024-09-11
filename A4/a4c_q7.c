/***7. Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables*****/

#include<stdio.h>
int sum(int *p1,int *p2);
int prod(int *p1,int *p2);
int n1=10;//a
int n2=5;
int  main(){
//int n1,n2; //b
//scanf("%d%d",&n1,&n2);
int *ptr1=&n1;
int *ptr2=&n2;
printf("sum is %d",sum(&n1,&n2));
printf("product is %d",prod(&n1,&n2));
return 0;
}

int sum(int *p1,int *p2){
	return (*p1)+(*p2);
	}
int prod(int *p1,int *p2){
	return (*p1)*(*p2);}


