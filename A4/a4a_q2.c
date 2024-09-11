/***Write a function to calculate power***/


#include<stdio.h>
int power(int b, int e);
int main(){
int b,e;
scanf("%d%d",&b,&e);
printf("%d is power",power(b,e));
return 0;
}

int power(int b,int e){
int power=1;
for(int i=0;i<e;i++){
power=power*b;
}
return power;
}

