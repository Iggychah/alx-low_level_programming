#include <stdio.h>
int main(void)
{
        int i;                                  char c;
	long li;
	long long lli;
	float f;

   	printf("Size of a char: %ld.\n", sizeof(c));
	printf("Size of an int: %ld.\n", sizeof(i));
	printf("Size of a long int: %ld.\n", sizeof(li));
        printf("Size of a long long int: %ld.\n", sizeof(lli));
        printf("Size of a float: %ld.\n", sizeof(f));	
             return (0);

}
