#include <stdio.h>

/*
 * if(CONDITION_1) {
 *  CODE;
 * } else if(CONDITION_2) {
 *  CODE;
 * } else {
 *  CODE;
 * }
 */

int main(int argc, char *argv[]) {
  int i = 0;

 //  printf("Default argument: %d => %s\n", argc, argv[0]);
  if(argc == 2) {
    printf("You only have one argument.\n");
  } else if(argc > 2 && argc < 5) {
    printf("Here's your arguments:\n");

    for(i = 0; i < argc; i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else if(argc >= 5) {
    printf("You have too many arguments.\n");
  } else {
    printf("You have not passed any arguments.\n");
  }

  return 0;
}
