#include <stdio.h>

void bin(int n) {
    if (n == 0)
        return;
    bin(n / 2);
    printf("%d", n % 2);
}
 int main() {
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    printf("Binary: ");
    if (number == 0) {
        printf("0");
    } else {
        bin(number);
    }
    printf("\n");
    return 0;
} 