#include <stdlib.h>
#include <stdio.h>

int test(int, int);
void hello();


int main(int argc, char *argv[]) {
    if (argc != 3) {
        hello();
        printf("pass two integers and they will be multiplied\n");
    } else {
        printf("%d\n", test(atoi(argv[1]), atoi(argv[2])));
    }
    return 0;
}
