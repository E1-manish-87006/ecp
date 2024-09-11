/***Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements.***/

#include<stdio.h>

int amax(int a[],int n);

int main(){
int a[5]={1,2,5,3,3};
int max=0;
for(int i=0;i<5;i++){
	if(a[i]>max){
		max=a[i];
	}
}
printf("max element is %d",max);
printf("max  element is %d",amax(a,5));
return 0;
}

int amax(int a[],int n){

int max=0;
for(int i=0;i<5;i++){
	if(a[i]>max){
		max=a[i];
	}
}
return max;
}

