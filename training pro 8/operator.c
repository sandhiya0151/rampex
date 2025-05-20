#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
   
        return a / b;

}

int main() {
    int a = 5;
    int b = 5;
    int sum = add(a, b);
    int subtraction = subtract(a, b);
    int multiplication = multiply(a, b);
    int division = divide(a, b);
     printf("%d + %d is %d\n", a, b, sum);
    printf("%d - %d is %d\n", a, b, subtraction);
    printf("%d * %d is %d\n", a, b, multiplication);
    printf("%d / %d is %d\n", a, b, division);

    return 0;
}