// Program to Print A to Z incremented By 3.
#include <stdio.h>
int main()
{
    for (char i = 'a'; i <= 'z'; i += 4)
    {
        printf("%c\n", i);
    }
}