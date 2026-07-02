#include <stdio.h>

void print_numbers_reverse(int start, int end) {
    do {
        printf("%d\n", start);
        start--;
    } while (start >= end);
}

// Do while Loop gaurentees that condition must to be true at least once.
// Even for the initial false condition.

int main () {

    print_numbers_reverse(24, 1);

}
