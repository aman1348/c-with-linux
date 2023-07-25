#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of boolean: %zu byte(s)\n", sizeof(bool));
    printf("Size of int pointer: %zu byte(s)\n", sizeof(int*));
    printf("Size of double pointer: %zu byte(s)\n", sizeof(double*));


    return 0;
}

