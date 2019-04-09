#include <stdio.h>


int main(int argc, char* argv[]) {
  int numbers[4] = { 1 };
  char name[4] = { 'a' };

  // first print them out raw
  printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  printf("Name: %s\n", name);

  // Set up numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // Set up the name
  name[0] = 'R';
  name[1] = 'A';
  name[2] = 'Y';
  name[3] = 'A';

  // print them out intialized
  printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("Name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  // Print name like a string
  printf("name: %s\n", name);

  // Another to use name
  char *another = "Rahul";
  // char another[5] = "Rahul";
  printf("Another: %s\n", another);

  printf("Another each: %c %c %c %c %c\n", another[0], another[1], another[2], another[3], another[4]);

  return 0;
}
