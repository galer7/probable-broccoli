#include <stdio.h>

int main() {
    float x;
    float two = 2;

    // In order to do a float division correctly, we need to cast AT LEAST ONE of the values/numbers in the operation to float
    // This wasn't necessary if we had to use AT LEAST ONE float variable instead of values
    x = 11 / two;

    // To printf a float, we first need %f to signal to the printf function that we want to print a float (meaning a number with decimal places)
    // To be more specific, we can provide the number of decimal places by using the following syntax: %.{{NUMBER_OF_DECIMAL_PLACES}}f
    printf("%.2f\n", x);
}