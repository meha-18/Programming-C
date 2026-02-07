#include <stdio.h>

/**
 * Program: Number Sign Checker
 * Purpose: Determines if a number is positive, negative, or zero.
 * Author: Maha (Sniper)
 */
int main() {
    
    int num;

    // Ask the user to input an integer
    printf("Enter a number: ");
    scanf("%d", &num);

    // Logic to check the sign of the number
    if (num > 0) {
        // If number is greater than 0
        printf("positive!\n");
    } else if (num < 0) {
        // If number is less than 0
        printf("negative!\n");
    } else {
        // If number is exactly 0
        printf("zero!\n");
    }
    
    return 0;
}
