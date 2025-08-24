#include <stdio.h>


void add(int *x) {
    *x = *x + 5;
}

int main() {
    int num = 10;
    int *p1, *p2;

    p1 = &num;
    p2 = &num;

    printf("Initial value of num: %d\n", num);

    *p1 = 20;
    printf("After changing with p1: %d\n", num);

    *p2 = 30;
    printf("After changing with p2: %d\n", num);

    add(p1);
    printf("After call by reference: %d\n", num);

    return 0;
}

