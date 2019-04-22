#include <stdio.h>

int main(int argc, char* argv[]) {
  // int matrix[] = { 0, 1, 2, 3 };
  int matrix[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
  int matrix1[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

  int total[3][3] = { { 0 }, { 0 }, { 0 } }; // { 0, 0, 0, 0 };
  // char test[4] = { 'a' }; // { 'a', '\0', '\0', '\0' };

  int i = 0;
  int j = 0;
  /*
  for(i = 0; i < 4; i++) {
    printf("%d => %d\n", i, total[i]);
  }
  for(i = 0; i < 4; i++) {
    printf("%d => %c\n", i, test[i]);
  }
  */
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      total[i][j] = matrix[i][j] + matrix1[i][j];
      printf("Adding %d => %d matrix value: %d\n", i, j, matrix[i][j]);
      printf("Adding %d => %d matrix1 value: %d\n", i, j, matrix1[i][j]);
      printf("%d\n", total[i][j]);
    }
  }

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%d => %d: %d\n", i, j, total[i][j]);
    }
  }
  // total => {{0, 2, 4}, {6, 8, 10}, {12, 14, 16}}

  return 0;
}

