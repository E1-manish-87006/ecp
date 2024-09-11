/***Write a function to sort the array using selection or bubble sort.***/

#include<stdio.h>
void insertionsort(int a[],int n);
//void bubblesort(int a[],int n);
//void  swap(int *n1,int *n2);
int main(){
int n=5;
int a[]={1,5,3,7,2};
//bubblesort(a,5);
insertionsort(a,5);
return 0;
}
void insertionsort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);}
}
/**
void bubblesort(int a[],int n){
	for(int i=0;i<n;i++){
	printf("%d\n",a[i]);}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			//	b[i]=swap(&a[j],&a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
	printf("%d",a[i]);}
}***/
/***void swap(int *n1,int *n2){
int temp=*n1;
*n1=*n2;
*n2=temp;
printf("%d %d",*n1,*n2);
}***/
