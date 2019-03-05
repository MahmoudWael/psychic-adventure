#include <stdio.h>
int main()
{
    int numberOfLine = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++numberOfLine;
        }
    }

    printf("%d\n", numberOfLine);

    return 0;
}