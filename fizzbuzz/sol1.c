#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;
  for(i = 1; i <= 100; i++) {
    if(i % 3 == 0 && i % 5 == 0) {
      printf("FIZZBUZZ\t");
    } else if(i % 3 == 0) {
      printf("FIZZ\t");
    } else if(i % 5 == 0) {
      printf("BUZZ\t");
    } else {
      printf("%d\t", i);
    }
  }
  printf("\n");

  return 0;
}
