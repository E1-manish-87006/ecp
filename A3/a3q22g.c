/**         G
        E F G F E
    C D E F G F E D C
A B C D E F G F E D C B A
    C D E F G F E D C
        E F G F E
            G
***/

#include<stdio.h>

int main(){
	char ch='G';
	for(int i=0;i<7;i++){
		if(i==0 || i==6){
		for(int k=1;k<=6;k++){
			printf(" ");
		}
			printf("%c",ch);
		}
		else if(i==1 || i==5){
		for(int k=1;k<=4;k++){
			printf(" ");
		}
			for(int j='E';j<ch;j++){
				printf("%c",j);
			}
			for(int j=ch;j>='E';j--){
				printf("%c",j);
			}
		}
		else if(i==2 || i==4){
		for(int k=1;k<=2;k++){
			printf(" ");
		}
			for(int j='C';j<ch;j++){
				printf("%c",j);
			}
			for(int j=ch;j>='C';j--){
				printf("%c",j);
			}
		}
		else if(i==3){
			for(int j='A';j<ch;j++){
				printf("%c",j);
			}
			for(int j=ch;j>='A';j--){
				printf("%c",j);
			}
		}		
		printf("\n");
	}
return 0;
}
	
