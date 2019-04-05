#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;
  for(i = 1; i <= 100; i++) {
    int modThree = !(i % 3);
    int modFive = !(i % 5);

    if(modThree || modFive) {
      if(modThree) {
        printf("FIZZ");
      }
      if(modFive) {
        printf("BUZZ");
      }
      printf("\t");
    } else {
      printf("%d\t", i);
    }
  }
  printf("\n");

  return 0;
}
