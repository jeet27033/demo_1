#include <stdio.h>
int main() {
    int i = 0;
    while (i < 5) {
        printf("Iteration %d\n", i);
        i++; // Increment i instead of decrementing
    }
    return 0;
}
