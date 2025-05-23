#include <stdio.h>
int main() {
    int a = 10;
    int *x = &a;
    int *y = &a;
    int sum = (*y) + (*x);
    *x = (*y);
    *y = sum;
    printf("a = %d\n",a);
    return 0;
}
