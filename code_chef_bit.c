#include <stdio.h>

int main() {
    int result = ((3 & 5) | 4) ^ 7;
    printf("%d\n", result); // Output: 2
    return 0;
}
