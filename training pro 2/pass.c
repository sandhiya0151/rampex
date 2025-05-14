#include <stdio.h>

int main() {
    float marks[5];
    int i;
    int pass = 1; 
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        if(marks[i] < 35) {
            pass = 0; 
        }
    }
    if(pass) {
        printf("\nResult: PASS\n");
    } else {
        printf("\nResult: FAIL\n");
    }

    return 0;
}