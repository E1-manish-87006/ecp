/***b. Armstrrong Numbers between 1 to 500, eg.153****/

#include<stdio.h>

int main() {
    for(int i=1; i<=500; i++) {
        int n = 0;
        int temp = i;
        while(temp != 0) { //n=log10(i)+1
            temp = temp / 10;
            n++;
        }
        int rem = 0;
        int arm = 0;
        int on = i;
        temp = i;
        while(temp != 0) {
            rem = temp % 10;
            int pow = 1;
            for(int j = 1; j <= n; j++) {
                pow = pow * rem;
            }
            arm += pow;
            temp = temp / 10;
        }
        if(on == arm) {
            printf("%d\n", arm);
        }
    }
    return 0;
}
