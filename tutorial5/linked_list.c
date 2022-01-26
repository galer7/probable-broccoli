#include <stdio.h>

// Parcurgerea unei liste: O(N)
// Cautarea unui nr intr-o lista: O(N) (worst-case)
// Stergerea unei celule oarecare din lista (fara cautare): O(1)
// Stergerea HEAD din lista: O(1)
// Adaugarea unui nou HEAD in lista: O(1)
// Adaugarea unei celule intr-un loc oarecare (fara cautare): O(1)

typedef struct node {
  int val;
  struct node* next;
} node;

int main() {
  node a;
  node b;
  a.val = 1;
  a.next = &b;
  b.val = 20;

  node c;
  b.next = &c;
  c.val = 61;

  printf("b val: %d\n", a.next->val);
  printf("b val: %d\n", b.val);

  printf("c val: %d\n", a.next->next->val);
  printf("c val: %d\n", b.next->val);
  printf("c val: %d\n", c.val);
}