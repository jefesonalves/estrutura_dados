#include <stdio.h>

int main() {
    int array_int[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int array_length = sizeof(array_int) / sizeof(* array_int);
    for (int x = 0; x < array_length; x++) {
        printf("%d\n", array_int[x]);
    }

    return 0;
}