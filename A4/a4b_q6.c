/**Write a function to print a given number in hexadecimal format.***/

#include<stdio.h>

void printhexa(int num);

int main(){
int n;
scanf("%d",&n);
printhexa(n);
return 0;
}

void printhexa(int num){
	int hexa=0;
	int rem=0;
	int i=1;
	if(num>0 && num<10){
	printf("%d",num);
	}
	else if(num==10){
	printf("A");
	}
	else if(num==11){
	printf("B");
	}
	else if(num==12){
printf("C");
	}
	else if(num==13){
	printf("D");
	}
	else if(num==14){
	printf("E");
	}
	else if(num==15){
	printf("F");
	}
	else{
while(num!=0){
		rem=num%16;  //since hexadecimal base is 16 so divide with it
		num=num/16;
		hexa+=rem*i;
		i*=10;
	}
	printf("%d",hexa);
}
}



