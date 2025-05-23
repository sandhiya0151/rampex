#include <stdio.h>
void printDescending(int n) {
    if (n == 0)
        return;
        printf("%d ", n);
    printDescending(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from %d to 1:\n", n);
    printDescending(n);
    printf("\n");
return 0;
}
