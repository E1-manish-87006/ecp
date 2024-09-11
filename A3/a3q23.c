/***print pascal traingle***/
#include<stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i=0; i<rows; i++) {
        for(int j=rows; j>i; j--) {
            printf(" ");
        }
        for(int k=0; k<=i; k++) {
            printf("%d ",(factorial(i)/(factorial(k)*factorial(i-k))));
        }
        printf("\n");
    }
    return 0;
}

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}
