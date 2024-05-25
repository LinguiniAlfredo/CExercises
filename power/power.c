#include <stdio.h>

int power(int, int);

int main() {
    printf("%d\n", power(5,4));
}

int power(int base, int n) {
    int p;
    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}
