/***8. Write a function to swap two numbers.***/
#include<stdio.h>
void swap(int *p1,int *p2);

void main(){
int n1,n2;
scanf("%d%d",&n1,&n2);
int *p1=&n1;
int *p2=&n2;
printf("before swap: %d and %d",*p1,*p2);
swap(&n1,&n2);
printf("after swap: %d and %d",*p1,*p2);

}

void swap(int *p1,int *p2){
printf("before swap: %d and %d",*p1,*p2);
int temp=*p1;
*p1=*p2;
*p2=temp;
printf("after swap: %d and %d",*p1,*p2);
}
