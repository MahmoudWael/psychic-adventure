#include <stdio.h>
int main()
{
    int numberOfCharacters;

    numberOfCharacters = 0;

    while (getchar() != EOF)
    {
        ++numberOfCharacters;
    }

    printf("%d\n", numberOfCharacters);

    return 0;
}