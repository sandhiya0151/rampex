#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = fahrenheitToCelsius(f);
    printf("Temperature in Celsius: %.2f\n", c);
    return 0;
}
