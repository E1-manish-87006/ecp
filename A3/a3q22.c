/**23. Print Pascal Triangle
1
1
1
1
1
1
2
3
4
1
3
6
1
4
Each term in Pascal triangle is binomial coefficient.
!
(
! × − )!
Where n is row number and r is column number.
1***/
#include<stdio.h>

int fact(int n);

int main(){
	int n=5;
	int r=9;
	float x;
	x=fact(n)/(fact(r)*fact(n-r));
	printf("%f",x);
	return 0;
	}



int fact(int n){
    if(n==1 || n==0){
		return 1;}
	else if(n>1){
	return n*fact(n-1);
	}
}

