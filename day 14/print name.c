#include <stdio.h>
int main() {
    char name[100];
    printf("enter name :");
    // scanf("%s",&name);
    fgets(name,100,stdin);
    printf("%s",name);
    return 0;