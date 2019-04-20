#include<stdio.h>

int main ( int argc , char* argv)
{
	int num = 999;
  int rem = 0;
  int k = 0;
  int revnum = 0;

	while (num > 100)
	{
		k = num;
		revnum = 0;
		while (k != 0)
		{
			rem = k % 10;
			revnum = revnum * 10 + rem;
			k = k/10;
		}

		if (num == revnum) {
		  printf ("%d\n", num);
      // If the below break is uncommented, the program will end as soon as it found the largest 3 digit palindrome number.
      // break;
		}

	  num--;
	}

	return 0;
}
