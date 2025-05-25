#include <stdio.h>

int main() {
    int n, p;

    printf("Enter number and bit position: ");
    scanf("%d %d", &n, &p);

    int result = (n >> p) & 1;

    printf("Bit at position %d is: %d\n", p, result);

    return 0;
}
