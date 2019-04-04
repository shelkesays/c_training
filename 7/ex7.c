#include <stdio.h>

/*
 * for(INITIALIZER; CONDITION; POST_OPERATION;) {
 *  CODE;
 * }
 */

int main(int argc, char* argv[]) {
  int i = 0;
  // Go through each string in argv
  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array strings
  char *states[] = {"California", "Oragano", "Washington", "Texas"};

  int num_states = 4;
  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
