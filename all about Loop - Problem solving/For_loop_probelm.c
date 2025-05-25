#include <stdio.h>
int main() {

    // 2 5 8 11 13

    int L = 2;
    int R = 13;
    int D = 3;
    int Sum = 0;

    for (; L <= R; L += D) {
        Sum = Sum + L;

    }

    printf("Sum = %d\n", Sum);

    return 0;
}
