#include <stdio.h>

int main(int argc, char *argv[]) {
  if(argc < 2) {
    printf("ERROR: You need one argument.\n");
    //this is how you abort a  program.
    return 1;
  }

  int  i = 0;
  int j = 1;
  int length = 0;
  for(i = 1; i < argc; i++) {
    printf("%s: ", argv[i]);
    // length = sizeof(argv[i]);
    // printf("%d\n", length);
  }
  for(i = 1; i < argc; i++) {
    // argv[i][j] != '\0';
    //length = sizeof(argv[i]);
    for(j = 0; argv[i][j] != '\0'; j++) {
      char letter = argv[i][j];
      switch(letter) {
        case 'a':
        case 'A':
          printf("%d: 'A'\n", j);
          break;
        case 'e':
        case 'E':
          printf("%d: 'E'\n", j);
          break;
        case 'i':
        case 'I':
          printf("%d: 'I'\n", j);
          break;
        case 'o':
        case 'O':
          printf("%d: 'O'\n", j);
          break;
        case 'u':
        case 'U':
          printf("%d: 'U'\n", j);
          break;
        case 'y':
        case 'Y':
          if(i > 2) {
            // it's only sometimes Y
            printf("%d: 'Y'\n", j);
          }
          break;
        default:
          printf("%d: %c is not a vowel\n", j, letter);
      }
    }
  }

  return 0;
}
