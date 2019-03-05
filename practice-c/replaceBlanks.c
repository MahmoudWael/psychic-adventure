/*
*   Exercise 1-9 replace every one or more blanks with a blank
*/
#include <stdio.h>
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            while ((c = getchar()) == ' ')
            {
                continue;
            }
            putchar(' ');
        }
        putchar(c);
    }

    return 0;
}