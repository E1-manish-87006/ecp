/***
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1***/
#include<stdio.h>

int main(){
	for(int i=5; i>=1; i--) {
        for(int j=5; j>=i; j--) {
            printf("%d ", j);
        }
	/**for(int i=1;i<=5;i++){
		int c=5;
		for(int j=0;j<i;j++){
				printf("%d",c);
				c--;
			}***/

		
		printf("\n");
	}
	return 0;
}
