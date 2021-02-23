#include <stdio.h>

int fib(int x) {
  if (x < 2) {
    return 1;
  } else {
    return fib(x - 1) + fib(x - 2);
  }
}

int main() {
  int result = fib(4);

  printf("Result of 4th fib: %d\n", result);
  return 1;
}