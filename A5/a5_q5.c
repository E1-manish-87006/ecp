/***Write a function to calculate maximum and minimum of the array elements.***/

#include<stdio.h>

int amax(int a[],int n);
int amin(int a[],int n);

int main(){
int a[5]={1,4,7,3,6};
printf("max element is %d",amax(a,5));
printf("min element is %d",amin(a,5));
return 0;
}

int amax(int a[],int n){
int max=0;
for(int i=0;i<n;i++){

	if(a[i]>max){
		max=a[i];
	}
	}
	return max;
	
}

int amin(int a[],int n){
int min;
for(int i=0;i<n;i++){
	min=a[0];
	if(a[i]<min){
		min=a[i];
	}
	}
	return min;
}

