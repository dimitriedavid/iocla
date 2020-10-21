#include <stdio.h>
#define INT_BITS 32

void print_binary(int number, int nr_bits)
{
	int maxInt = 1 << (nr_bits - 1);
	printf("0b");
	for(int i = 0; i < nr_bits; i++){
		printf("%d", number & maxInt ? 1 : 0);
		number = number << 1;
	}
	printf("\n");
}

void rotate_left(int *number, int bits)
{
	for (int i = 0; i < bits; i++) {
		int maxPowOf2 = (1 << (INT_BITS - 1));
		int MSB = (*number & maxPowOf2) ? 1 : 0;

		// shift left
		*number = *number << 1;

		// add removed bit
		*number += MSB;
	}
}

void rotate_right(int *number, int bits)
{
	for (int i = 0; i < bits; i++) {
		int LSB = (*number) & 1;

		// shift right
		*number = ((unsigned int) *number) >> 1;

		// add removed bit
		int maxPowOf2 = (1 << (INT_BITS - 1));
		*number = (*number) + (maxPowOf2 * LSB);
	}
}



int main()
{
	int a = -2;

	rotate_right(&a, 5);

	print_binary(a, 32);
	return 0;
}

