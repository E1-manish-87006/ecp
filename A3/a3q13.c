/***13. Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8****/

#include<stdio.h>

int main(){
int n;
scanf("%d",&n);

int n1=0;
int n2=1;
int n3;
printf("%d\n%d\n",n1,n2);
for(int i=2;i<n;i++){
n3=n1+n2;
n1=n2;
n2=n3;
printf("%d\n",n3);
}
return 0;
}


