/***8. Write a function to search the given number into the array using linear search and return the
index of the element. If element is not found it should return -1.***/

#include<stdio.h>
int fun(int a[],int k,int n);

int main(){
int n=5;
int a[]={2,1,6,4,3};
printf("%d",fun(a,4,5));
return 0;
}

int fun(int a[],int k,int n){
for(int i=0;i<n;i++){
if(a[i]==k){
return i;
}
}
return -1;


}
