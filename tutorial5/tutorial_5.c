#include <stdio.h>

typedef struct person {
  int age;
  char* name;
  int married;  // boolean
} person;

int main() {
  person gabriel;
  person class[50];

  gabriel.age = 10;
  gabriel.name = "Gabriel";
  gabriel.married = 0;

  printf("%d\n", gabriel.age);
  printf("%s\n", gabriel.name);
  printf("%d\n", gabriel.married);

  node node_1;
}