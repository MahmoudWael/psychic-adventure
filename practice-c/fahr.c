#include <stdio.h>
int main()
{
    // int lower, higher;
    // float celsius;
    // lower = 0;
    // higher = 200;

    // for (float i = lower; i < higher; i++)
    // {
    //     celsius = 5 * (i -32) / 9;
    //     printf("%f\t%f\n", i, celsius);
    // }

    int lower, higher, step;
    float fahr, celsius;
    lower = 0;
    higher = 200;
    fahr = lower;
    step = 10;
    printf("Fahr\tCelsius\n");
    while(fahr <= higher){
         celsius = (5.0/9.0) * (fahr -32.0);
         printf("%3.0f\t%6.1f\n", fahr, celsius);
         fahr = fahr + step;
    }
    
    return 0;
}
