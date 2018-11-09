//Name: Danial Ahmad
//Class:BSCS 8-B
//Reg no:249912

#include<stdio.h>
int main(void)
{
	int start_day, days_in_month, i, day_of_week;
//start_day is the day of week from which the month starts.
	printf("Enter start day: ");
	scanf_s("%d", &start_day);
//days_in_month are the days in the month.
	printf("Enter days in month: ");
	scanf_s("%d", &days_in_month);
//This for loop is used to print spaces in the first row.
	for (i = 1; i < start_day; i++) {
		printf("   ");
	}
//This for loop is used to print the days of the month.
	for (i = 1; i <= days_in_month; i++) {
		printf("%2d ", i);
		if ((i + start_day - 1) % 7 == 0) {
			printf("\n");
		}
	}
	return 0;
}