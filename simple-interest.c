#include <stdio.h>
int main () {
    float principal,rate , time,interest; // Declare float variables for principal, rate, time, and interest.
    printf("Enter principal amount\n");
    scanf("%f", &principal);  // This line takes input for the principal amount from the user.
    printf("Enter rate of interest rate \n");
    scanf("%f", &rate); // This line takes input for the rate of interest from the user.
    printf("Enter time in years\n");
    scanf("%f", &time); // This line takes input for the time period in years from the user.
    interest = (principal * rate * time) / 100; // This line calculates the simple interest using the formula: (P * R * T) / 100.
    printf("The simple interest when principal is %.2f, rate is %.2f and time is %.2f years is %.2f\n", principal, rate, time, interest);
    return 0;
}
