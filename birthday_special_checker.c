#include <stdio.h>

/* Program to check for special birth months (April and November).
 
 * Purpose: Personal greeting for special dates.
 */
int main() {
    int birthmonth;

    // Ask user for their birth month
    printf("Enter your birth month (1-12): ");
    scanf("%d", &birthmonth);

    // Check if the month matches special birthdays (Maha or Othmane)
    if (birthmonth == 11 || birthmonth == 4) {
        printf("Happy birthday to a special person!\n");
    } else {
        printf("Have a great day!\n");
    }

    return 0;
}
