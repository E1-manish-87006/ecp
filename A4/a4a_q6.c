/***Write a function to print Pascal triangle of given number of rows.****/

#include<stdio.h>

int fun(int rows);

int main(){
int rows;
scanf("%d",&rows);
fun(rows);
return 0;
}


int fun(int rows){

for(int i=1;i<=rows;i++){
	for(int j=1;j<=(rows-i);j++){
		printf(" ");
	}
	int coef=1;
	for(int j=1;j<=i;j++){
		printf("%4d",coef);
		coef = coef * (rows - i) / i;
		
	}
printf("\n");
}
return 0;
}
