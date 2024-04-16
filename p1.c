// Program to find sum of first digit and last digit.
#include <stdio.h>
int main()
{
    int n, sum = 0, first_digit, last_digit;
    printf("Enter The Number:");
    scanf("%d", &n);
    // Last Digit
    last_digit = n % 10;
    // First Digit
    while (n >= 10)
    {
        n = n / 10;
    }
    first_digit = n;
    // Sum Of First Digit And Last Digit
    sum = first_digit + last_digit;
    printf("Sum Of First Digit And Last Digit: %d", sum);
}