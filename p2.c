// Program to Count total digits in Number.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter Number:");
    scanf("%d", &num);
    for (; num != 0; num /= 10)
    {
        count++;
    }
    printf("Total Number of digits in Number is: %d", count);
}