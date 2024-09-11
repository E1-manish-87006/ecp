/**Write a function to calculate power using recursion.***/
#include<stdio.h>
int power(int b,int e);

int main(){
int b,e;
scanf("%d%d",&b,&e);
printf("%d is power",power(b,e));}

int power(int b,int e){
if(e==0){
return 1;}
else if(e==1){
return b;}

else if(e>0){
	return b*power(b,e-1);
	}
}

