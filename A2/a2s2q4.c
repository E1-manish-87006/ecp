/****Write a program to display day of week from given date (day, month and year).***/

#include <stdio.h>

int main() {
int day, month, year;
printf("Enter day (1-31): ");
scanf("%d", &day);
printf("Enter month (1-12): ");
scanf("%d", &month);
printf("Enter year: ");
scanf("%d", &year);

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
days[1] = 29;
}

int totalDays = 0;
for (int i = 0; i < month - 1; i++) {
totalDays += days[i];
}

totalDays += day;

switch (totalDays % 7) {
case 0: printf("Sunday\n"); break;
case 1: printf("Monday\n"); break;
case 2: printf("Tuesday\n"); break;
case 3: printf("Wednesday\n"); break;
case 4: printf("Thursday\n"); break;
case 5: printf("Friday\n"); break;
case 6: printf("Saturday\n"); break;
}

return 0;
}
