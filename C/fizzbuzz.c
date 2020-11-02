#include <stdio.h>
#include <stdbool.h>

int main() {
    for (int i=0; i<=100; i++) {

        bool output = false;

        if (i % 3 == 0) {
            printf("Fizz");
            output = true;
        };

        if (i % 5 == 0) {
            printf("Buzz");
            output = true;
        };

        if (output == false) {
            printf("%d", i);
        };

        printf("\n");
    }
    return 0;
}