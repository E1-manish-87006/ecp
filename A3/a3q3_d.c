/****Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number****/

#include <stdio.h>
#include <math.h>

int main() {
int num;
scanf("%d", &num);

int on = num;
int arm = 0;
int len = 0;

    // len=sizeof(num);
int temp = num;
while (temp != 0) {
temp /= 10;
len++;
}
temp=num;
while (temp != 0) {
int rem = temp % 10;
int power = 1;
int i=0;
while ( i < len) {
    power *= rem;
	i++;
}
arm += power;

temp /= 10;
}

if (arm == on) {
printf("%d is an Armstrong number", on);
    }
else {
printf("%d is not an Armstrong number", on);}
return 0;
}

