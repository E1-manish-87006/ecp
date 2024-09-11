/**Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required.***/

#include<stdio.h>
void print(int arr[],int n);
void scan(int arr[],int n);
int main(){
int n;
scanf("%d",&n);
int arr[n];
scan(arr,n);
print(arr,n);
return 0;
}
void scan(int arr[],int n){
	
	for(int i=0;i<(n);i++){
		scanf("%d",&arr[i]);
	}


}
void print(int arr[],int n){
	for(int i=0;i<(n);i++){
		printf("%d",arr[i]);
	}
}
