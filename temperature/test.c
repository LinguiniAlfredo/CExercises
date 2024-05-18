#include<stdio.h>

#define LOWER = 0;
#define UPPER = 300;
#define STEP = 20;

float fahrToCelc(float fahr) {
    float celc;
    celc = 5 * (fahr-32) / 9;
    return celc;
}

int main() {
    float fahr, celc;
    int step, max;

    printf("Fahrenheit \t Celcius \n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
       celc = fahrToCelc(fahr);
       printf("%3.0f \t %6.3f \n", fahr, celc);
    }
}

