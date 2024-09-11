/****
A B C D
B C D
C D 
D
***/
#include<stdio.h>

int main() {
    char ch;
    for(int i=0; i<4; i++) {
	if(i==0){
		ch='A';
		for(int j=0;j<4;j++){
        printf("%c ", ch);
        ch++;}printf("\n");
    }

     else  if(i == 1) {
            ch = 'B';
            for(int j=0; j<3; j++) {
                printf("%c ", ch);
                ch++;
            }printf("\n");
        }
	else if(i == 2) {
            ch = 'C';
            for(int j=0; j<2; j++) {
                printf("%c ", ch);
                ch++;
            }printf("\n");
        }
	else {
            ch = 'D';
            for(int j=0; j<1; j++) {
                printf("%c ", ch);
            }printf("\n");
        }
	}
    
    return 0;
}

