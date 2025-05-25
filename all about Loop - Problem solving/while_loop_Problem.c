#include <stdio.h>

int main() {

    int L = 2;
    int R = 8;
    int sum =0;
    int D =2;
    while (L<=R) {
        sum+= L;
        L+=D;

     }
    printf("sum = %d\n",sum);



}