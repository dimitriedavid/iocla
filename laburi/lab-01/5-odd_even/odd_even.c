#include <stdio.h>
#include <stdlib.h>

void print_hexa(int number)
{
	printf("0x%08x\n", number);
}

void print_binary(int number, int nr_bits)
{
	int maxPowOf2 = 1 << (nr_bits - 1);
	printf("0b");
	for(int i = 0; i < nr_bits; i++){
		printf("%d", number & maxPowOf2 ? 1 : 0);
		number = number << 1;
	}
	printf("\n");
}

void check_parity(int *numbers, int n)
{
	for(int i = 0; i < n; i++) {
		if (numbers[i] & 1) {
			// impar - show hexa
			print_hexa(numbers[i]);
		} else {
			// par - show binary
			print_binary(numbers[i], 8);
		}
	}
}

int main()
{
	int n = 5;
	int v[] = {214, 71, 84, 134, 86};

	check_parity(v, n);

	return 0;
}

