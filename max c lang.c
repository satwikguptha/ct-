#include <stdio.h>

int findMax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a = 10, b = 20, c = 30;
    printf("Maximum: %d\n", findMax(a, b, c));
    return 0;
}
