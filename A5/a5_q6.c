/****Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array.****/

#include<stdio.h>

void unique(int a[],int n);

int main(){
int n=5;
int a[]={1,1,3,4,4};
unique(a,5);
return 0;
}

void unique(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);}
	int c=0;
	int b[n];
	b[c++]=a[0];
	for(int i=1;i<n;i++){
		int j;
		for(j=0;j<c;j++){
			if(a[i]==a[j]){
			break;}}
			if(j==c){
			b[c++]=a[j];}
			}

	for(int i=0;i<c;i++){
		printf("%d\n",b[i]);}
		
printf("count is %d",c-1);
}

