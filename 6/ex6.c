#include <stdio.h>

/*
 * while(CONDITION) {
 *  CODE;
 * }
 */

int main(int argc, char* argv[]) {
  int i = 0;
  while(i < 25) {
    printf("%d\t", i);
    i++;
  }
  printf("\n");

  return 0;
}
