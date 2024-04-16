// Program To find diffrenece sum of odd and even numbers between 10 and 1000
#include <stdio.h>
int main()
{
    int esum, osum, sum;
    for (int i = 10; i < 1000; i++)
    {
        if (i % 2 == 0)
        {
            osum += i;
        }
        else
        {
            esum += 1;
        }
    }
    printf("Sum Of Odd:%d", osum);
    printf("\nSum Of Even:%d\n", esum);
    if (esum > osum)
    {
        printf("Difference is %d", esum - osum);
    }
    else if (osum > esum)
    {
        printf("Difference is %d", osum - esum);
    }
    else
    {
        printf("Zero");
    }
}