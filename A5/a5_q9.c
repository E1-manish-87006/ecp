/***9. Write a function to search the given number into the array using binary search and return the
index of the element. If element is not found it should return -1.****/

#include<stdio.h>

int binarysearch(int a[],int n,int k);

int main(){
int n=5;
int a[]={1,5,2,9,6};
printf("%d",binarysearch(a,n,3));
return 0;
}


int binarysearch(int a[],int n,int k){

for(int p=0;p<n;p++){
	int l=a[0];
	int u=a[n-1];
	int mid=(l+u)/2;
	for(int i=l;i<=mid;i++){
		if(k==a[i]){
			return i;
		}
	}
	for(int j=mid+1;j<=u;j++){
		if(k==a[j]){
			return j;
		}
	}
	return -1;
	}
}
