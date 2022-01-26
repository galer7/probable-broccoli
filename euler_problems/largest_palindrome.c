#include "stdio.h"

// 1234 -> clone = 4321
// result = result * 10 + currentX % 10
// currentX = currentX / 10
int isPalindrome(int x) {
  // We will store the result here
  int result = 0;

  // We will mutate this variable in order to construct clone
  int currentX = x;

  while (currentX != 0) {
    result = result * 10 + currentX % 10;
    currentX = currentX / 10;
  }

  if (result == x) return 1;
  return 0;

  // Or use ternary operator:
  // return result == x ? 1 : 0;
}

int main() {
  // Solutia brute-force -> iei toate cazurile (foarte ineficient)
  int max = 0;
  int result;
  int tmp = 1;
  for (int i = 100; i <= 999; i++) {
    for (int j = 100; j <= 999; j++) {
      tmp = i * j;
      if (tmp > max && isPalindrome(tmp)) max = tmp;
    }
  }

  printf("%d\n", max);
};