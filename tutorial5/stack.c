#include "stdio.h"

typedef struct node {
  int val;
  struct node* next;
} node;

typedef struct stack_t {
  struct node* head;
} stack_t;

stack_t stack;

stack_t push(int val) {
  node head;
  head.val = val;
  head.next = stack.head;
  stack.head = &head;

  printf("%d\n", stack.head->val);
  printf("%d\n", stack.head->next);

  return stack;
};

int pop() {
  int prev_head_val = stack.head->val;
  stack.head = stack.head->next;
  return prev_head_val;
};

void print_stack(stack_t s) {
  stack_t tmp_s = s;
  printf("[");

  while (tmp_s.head != NULL) {
    printf("%d ", tmp_s.head->val);
    tmp_s.head = tmp_s.head->next;
  }

  printf("]\n");
}

int main() {
  stack.head = NULL;
  push(7);
  print_stack(stack);
  int popped = pop();
  printf("%d", popped);
}