#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;
  for(i = 1; i <= 100; i++) {
    if(!(i % 3) || !(i % 5)) {
      printf("%s%s\t", !(i % 3) ? "FIZZ": "", !(i % 5) ? "BUZZ" : "");
    } else {
      printf("%d\t", i);
    }
  }
  printf("\n");

  return 0;
}
