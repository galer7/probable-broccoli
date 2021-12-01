#include "stdio.h"
// asdasd

/**
this
is
a
multiline
comment
*/

int f1() {
    // ...many instructions...
    return 42;
}

int main() {
    int f1_result = f1();
    char one_char = 'a';
    char *many_chars = "asd";
    int fake_boolean = 0; // 0 is false
    
    // ~0 == 1, and 1 is true, so this block will execute
    if (~fake_boolean) {
        printf("We used the NOT operator here\n");
    }
    
    // we prepare a variable which will hold the user input
    int user_input;
    
    // we print the message to the user
    printf("Please insert a number: ");
    
    // we scan the user's input
    scanf("%d", &user_input);
    
    // if the user input respects a condition, do something
    if (user_input == 42) {
        printf("You entered the right number!\n");
    } else {
        printf("Fail!\n");
    }
    
    // the switch block tests only for equality of the variable
    // in the argument, in this case user_input
    switch (user_input) {
        case 1:
            printf("I'm 1 now!\n");
            break;
        case 2:
            printf("I'm 2 now!\n");
            break;
        default:
            printf("No lucky number this time...\n");
            break;
        
    }
    
    // ternary operator
    int x = fake_boolean ? 10 : 42;
    
    // Lecture 3...
    // for loop

    for(int i = 0, j = 10; i < 10 || j > 3; i += 2, j -= 3) {
        printf("%d, %d\n", i, j);
    }
    
    
    
    
    
    // printf("f1 returns: %d\n", f1_result);
    // printf("the string we wrote: %s\n", many_chars);
}
