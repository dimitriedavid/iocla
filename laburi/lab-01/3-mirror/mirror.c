#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	char *begin, *end, aux;
	int len, i;

	len = strlen(s);
	begin = s;
	end = s;

	for(i = 0; i < len -1 ; i++){
		end++;
	}

	for(i = 0; i < len/2; i++){
		aux = *end;
		*end = *begin;
		*begin = aux;


		begin++;
		end--;
	}

	printf("%s\n", s);

}

int main()
{
	/* TODO: Test function */
	mirror("AnaAreMere");

	return 0;
}
