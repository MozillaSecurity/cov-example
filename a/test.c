#include <stdio.h>

int test(int a, int b) {
    int x = a;
    x *= b;
    if (b == 1337) {
        printf("you win\n");
    }
    return x;
}
