#include <stdio.h>

// 3 -> 11
// 3 / 2 = 1 <==>
// 0000_0011 >> 0000_0001 == 1

int main() {
    // Always initialize int variables!
    // We want to start from 0
    int sum = 0;

    // Let's first iterate through ALL natural numbers smaller than 1000 [0; 999]
    for(int x = 0; x < 1000; x++) {
        // Now, let's verify that the current value is a multiple of either 3 or 5
        if(x % 3 == 0 || x % 5 == 0) {
            sum = sum + x;
        }
    }

    printf("Result: %d\n", sum); // 233168
}