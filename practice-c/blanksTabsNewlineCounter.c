#include <stdio.h>
int main()
{
    int blanks, tabs, newLines;
    int c;
    blanks = 0;
    tabs = 0;
    newLines = 0;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
            ++newLines;
            break;
        case '\t':
            ++tabs;
            break;
        case ' ':
            ++blanks;
            break;
        default:
            break;
        }
    }
    printf("\n%s\t%s\t%s\n", "newLines", "tabs", "blanks");
    printf("\n%d\t%d\t%d\n", newLines, tabs, blanks);

    return 0;
}