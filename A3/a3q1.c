/****1.
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output: ******

***/

#include<stdio.h>
int main(){
char ch;
printf("enter character");
scanf("%c",&ch);
int num;
printf("enter number");
scanf("%d",&num);
int i=1;
while(i<=num){
printf("%c",ch);
i+=1;
}
}
