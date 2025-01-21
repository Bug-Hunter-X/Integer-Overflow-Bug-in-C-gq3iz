#include <stdio.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;

  //Check for overflow before assigning
  if (20 > INT_MAX - x) {
    fprintf(stderr, "Integer overflow detected!\n");
    return 1; // Indicate an error
  } else {
    *ptr = 20; 
    printf("Value of x: %d\n", x);
  }

  return 0;
} 