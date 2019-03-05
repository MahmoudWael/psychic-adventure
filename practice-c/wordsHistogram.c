/*
*   Exercise l-13. a program to print a histogram of the lengths of words in
*   its input. It is easy to draw the histogram with the bars horizontal; a vertical
*   orientation is more challenging. 
*/
#include <stdio.h>
int main()
{
#define IN 1
#define OUT 0
#define ARRAY_LENGTH 5

    int c, state, wordLength, index;
    int wordsArray[ARRAY_LENGTH];

    wordLength = index = 0;

    state = IN;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        wordsArray[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {

        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++index;
            wordLength = 1;
        }
        else
        {
            wordsArray[index] = ++wordLength;
        }
    }

    //horizontal histogram
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d\t", wordsArray[i]);
        for (int j = 0; j < wordsArray[i]; j++)
        {
            printf("_");
        }
        printf("\n");
    }
}