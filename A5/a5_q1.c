/****Write a program to accept marks of five subjects, calculate its total and average.***/
#include<stdio.h>

int main(){
int n;
printf("enter size of array:");
scanf("%d",&n);
int m[n];
printf("enter marks:");
for(int i=0;i<n;i++){
scanf("%d",&m[i]);
}
int t=0;
int c=0;
for(int i=0;i<n;i++){
	t+=m[i];
	c++;
	}
printf("%d is count\n",c);
float avg=t/c;
printf("%d is total and %.3f is average",t,avg);
return 0;
}

