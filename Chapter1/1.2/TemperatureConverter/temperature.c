#include <stdio.h>

int main() {
    //While Loop Version
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    //For Loop Version
    // int fahr, celsius;
    // int upper = 300;

    // for(fahr = 0; fahr <= upper; fahr = fahr + 20) {
    //     celsius = (5.0/9.0) * (fahr-32);
    //     printf("%d\t%d\n", fahr, celsius);
    // }
}