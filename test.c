#include <stdio.h>
int main() {
    int i = 0;
    while (i < 5) {
        printf("Iteration %d\n", i);
        i++; // Corrected from i-- to i++ to terminate the loop
    }
    return 0;
}
