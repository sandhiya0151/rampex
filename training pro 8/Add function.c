#include <stdio.h>

    int add(int x,int y){
        return x+y;
    }
    int main(){
    int x=6;
    int y=4;
    int sum=add(x,y);
    printf("%d + %d is %d\n",x,y,sum);
    return 0;
}