// In this problem you will continue developing the data feature which you started
// implementing in the previous problem. You will implement a "tomorrow" feature in
// the C programming language via a function called "advanceDay()". The function
// advanceDay() should take as input a date (stored in a struct date) and return
// the date of the following day. You do not have to take into account leap years
// (although you may if you wish to). That is, it is okay for your function to
// always return March 1 as the day following February 28, no matter the year.

// You are provided with a familiar date structure definition, a main function as
// well as the function prototypes for the readDate(), printDate(), and
// advanceDate() functions. Do not modify any of the given code. Simply add your
// function definitions underneath the main() function. For the readDate() and
// printDate() functions you may simply copy and paste the code you developed in
// the previous task.

// Examples

// Input:
// 2018 10 2

// Output:
// 10/02/2018

// 10/03/2018

// Input:
// 2018 10 31

// Output:
// 10/31/2018

// 11/01/2018

// Input:
// 2018 11 30

// Output:
// 11/30/2018

// 12/01/2018

// Input:
// 2018 12 31

// Output:
// 12/31/2018

// 01/01/2019

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void printDate(struct date printer) {
    printf("%02d/", printer.month);
    printf("%02d/", printer.day);
    printf("%d\n", printer.year);
}

void readDate(struct date *readPtr) {
    scanf("%d ", &(*readPtr).year);
    scanf("%d ", &(*readPtr).month);
    scanf("%d ", &(*readPtr).day);
}

struct date advanceDay(struct date dateInput) {
    int thirtyDaysInMonth = 0;
    int thirtyOneDaysInMonth = 0;

    if (
        (dateInput.month == 9) ||
        (dateInput.month == 4) ||
        (dateInput.month == 6) ||
        (dateInput.month == 11)
        )
    {
        thirtyDaysInMonth = 1;
        thirtyOneDaysInMonth = 0;

    } else if(
        (dateInput.month == 1) ||
        (dateInput.month == 2) ||
        (dateInput.month == 3) ||
        (dateInput.month == 5) ||
        (dateInput.month == 7) ||
        (dateInput.month == 8) ||
        (dateInput.month == 10)
        )
    {
        thirtyDaysInMonth = 0;
        thirtyOneDaysInMonth = 1;
    }



    if ((dateInput.day == 31) && (dateInput.month == 12))
    {
        dateInput.day = 1;
        dateInput.month = 1;
        dateInput.year++;

    } else if(thirtyDaysInMonth && (dateInput.day == 30))
    {
        dateInput.day = 1;
        dateInput.month++;

    } else if(thirtyOneDaysInMonth && dateInput.day == 31)
    {
        dateInput.day = 1;
        dateInput.month++;

    } else {
        dateInput.day++;
    }
    return dateInput;
}
