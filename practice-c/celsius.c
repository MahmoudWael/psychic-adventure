#include <stdio.h>
int main()
{
    float fahr, celsius;
    // int lower, higher, step;
    
    //symbolic constants
    #define LOWER 0
    #define HIGHER 200
    #define STEP 10

    // lower = 0;
    // higher = 200;
    // fahr = lower;
    // step = 10;
    
    celsius = HIGHER;
    printf("Celsius\tFahr\n");
    while (celsius >= LOWER)
    {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius -= STEP;
    }

    return 0;
}