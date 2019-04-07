#include <stdio.h>


/*
 * SWITCH(OPERAND) {
 *  CASE 'OPTION1':
 *    CODE;
 *    break;
 *  ...
 *  DEFAULT :
 *    CODE;
 *    break;
 * }
 */

int main(int argc, char* argv[]) {

  char operand = 'u';
  switch(operand) { /* location Y */
    case 'a': // Y + a
      printf("a is vowel.\n");
      //break;
    case 'A': // Y + A
      printf("A is vowel.\n");
      break;
    case 'e': // Y + e
    case 'E': // Y + E
      printf("E is a vowel.\n");
      break;
    case 'i': // Y + i
    case 'I': // Y + I
      printf("I is vowel.\n");
      break;
    case 'o': // Y + o
    case 'O': // Y + O
      printf("O is vowel.\n");
    case 'u': // Y + u
    case 'U': // Y + U
      printf("U is vowel.\n");
      break;
    default:
      printf("Provided character is not vowel.\n");
      break;
  }

  return 0;
}
