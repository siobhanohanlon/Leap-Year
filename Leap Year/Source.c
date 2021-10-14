#include <stdio.h>

void main() 
{
	//Variables
	int day;
	int month;
	int year;
	int daynumber;

	//Enter day
	printf("Please enter the day\t");
	scanf("%i", &day);

	printf("day : %i \n", day);

	//Enter Month
	printf("Please enter the month\t");
	scanf("%i", &month);

	printf("month :  %i \n", month);

	//Enter Year
	printf("Please enter the year\t");
	scanf("%i", &year);

	printf("year :   %i\n", year);


	void leapyear(); {

		if (year % 4 == 0) {



		}
	}

	if (month == 1) { //january
		printf("your day is %i\t\n", day);
	}
	if (month == 2) { //febuary
		daynumber = 31 + day;
		printf("your day is %i\t\n", daynumber);
	}
	if (month == 3) { //march

		if (year % 4 == 0) {

			daynumber = 31 + 29 + day;
			printf("your day is %i\t\n", daynumber);
		}
		else if (year % 100 == 0 && year % 400 == 0) {

			daynumber = 31 + 29 + day;
			printf("your day is %i\t\n", daynumber);
		}
		else {
			daynumber = 31 + 28 + day;
			printf("your day is %i\t\n", daynumber);
		}

	}

	if (month == 4) { //april

		daynumber = 31 + 29 + 31 + day;
		printf("your day is %i\t\n", daynumber);
	}

	if (month == 5) { //may

		daynumber = 31 + 29 + 31 + 30 + day;
		printf("your day is %i\t\n", daynumber);
	}

	if (month == 6) { //june

		daynumber = 31 + 29 + 31 + 30 + 31 + day;
		printf("your day is %i\t\n", daynumber);
	}
	if (month == 7) { //july
		daynumber = 31 + 29 + 31 + 30 + 31 + 30 + day;
		printf("your day is %i\t\n", daynumber);
	}
	if (month == 8) { //august
		daynumber = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
		printf("your day is %i\t\n", daynumber);
	}

	if (month == 9) { //september

		daynumber = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		printf("your day is %i\t\n", daynumber);
	}
	if (month == 10) { //october

		daynumber = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		printf("your day is %i\t\n", daynumber);
	}
	if (month == 11) { //november

		daynumber = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		printf("your day is %i\t\n", daynumber);
	}
	if (month == 12) { //december

		daynumber = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		printf("your day is %i\t\n", daynumber);
	}
}