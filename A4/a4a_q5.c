/***Write a function to print a given character for a given number of times.***/
#include<stdio.h>
int fun(char ch,int n);

int main(){
char ch;

scanf("%c",&ch);
int n;
scanf("%d",&n);
fun(ch,n);
return 0;
}

int fun(char ch,int n){
for(int i=1;i<=n;i++){
printf("%c is %d\n",ch,i);
}
}


