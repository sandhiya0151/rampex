 #include <stdio.h>

int main() {
    int array[2][2] = {
        {1, 2}, 
        {4, 5}
     };
    printf("The 2D array is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
