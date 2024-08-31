/****7. Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9 3 6 1
b. 9361 = 9 000 + 300 + 60 + 9
 c. 1639*****/
#include<stdio.h>
void main(){
	int num,a,b,c,d;
	scanf("%d",&num);
	a=num/1000;
	num=num%1000;
	b=num/100;
	num=num%100;
	c=num/10;
	num=num%10;
	d=num;
	printf("%d %d %d %d\n",a,b,c,d);
	printf("%d+%d+%d+%d\n",a*1000,b*100,c*10,d);
	printf("%d%d%d%d",d,c,b,a);
}
	
