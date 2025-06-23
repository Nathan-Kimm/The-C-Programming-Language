//Modify the temperature conversion program to print a heading above the table

#include <stdio.h>

int main() {
    float fahr, celsius;
    int step = 20;
    printf("Fahrenheit\tCelsius\n");
    printf("-------------------------\n");
    for(fahr = 0; fahr <= 300; fahr = fahr + step) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%6.1f\t%15.1f\n", fahr, celsius);
    }
}