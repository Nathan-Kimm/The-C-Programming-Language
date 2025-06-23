#include <stdio.h>

int main() {
    float celsius, fahr;
    int step = 20;
    printf("Celsius\tFahrenheit\n");
    printf("------------------\n");
    for(celsius = 0; celsius <= 300; celsius = celsius + step) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%6.1f %8.1f\n", celsius, fahr);
    }
}