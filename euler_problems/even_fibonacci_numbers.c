#include <stdio.h>
#define FOUR_MILLION 4000000


// 3rd element: fib(1, 2) == 3
// 4th element: fib(2, fib(1, 2))
// 5th element: fib(fib(1, 2), fib(2, fib(1, 2)))
void fib(int first, int second) {
    int current_element = first + second;
    printf("%d\n", current_element);
    fib(second, current_element);
}

int compute_next_fib_nr(int n_2, int n_1) {
    int new_element = n_1 + n_2;
    return new_element;
}

/**
 * By considering the terms in the Fibonacci sequence whose values
 *  do not exceed four million, find
 *  the sum of the even-valued terms (doar numerele pare).
 */
int main() {
    int a = 1, b = 2;
    int computed_element;

    // Initialize sum only with b, since a is ODD!
    int sum = b;

    while (1) {
        computed_element = compute_next_fib_nr(a, b);
        if(computed_element >= FOUR_MILLION) break;

        a = b;
        b = computed_element;

        // Check if computed_element is even
        if (computed_element % 2 == 0) {
            // ... Add to sum if true
            sum = sum + computed_element;
        }
    }

    printf("Result: %d\n", sum); // 4613732
}