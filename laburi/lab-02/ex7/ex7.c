#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

int my_strcmp(const char *s1, const char *s2) {
	const char * a = s1;
	const char * b = s2;

	while (*a || *a == *b) {
		a++;
		b++;
	}

	int res = (int) (*a) - (int) (*b);

	printf("Strcmp response: %d\n", res);

	return res;
}

void *my_memcpy(void *dest, const void *src, size_t n) {
	char *p = dest;
	for (int i = 0; i < n; i++) {
		p[i] = *((const char *) src + i);
	}
	printf("Memcpy response: %s\n", (char *) dest);
	return dest;
}

char *my_strcpy(char *dest, const char *src) {
	int n = strlen(src);
	for (int i = 0; i < n; i++) {
		*(dest + i) = *(src + i); 
	}
	printf("Strcpy response: %s\n", dest);
	return dest;
}

int main() {
	char s1[] = "Abracadabra";
	char s2[] = "Abracababra";
	char src[] = "Learn IOCLA, you must!";
	char *dest = malloc(sizeof(src));

	/*
	Decomentati pe rand cate un assert pe masura ce implementati o functie.
	Daca functia voastra este implementata corect atunci asertia se va realiza
	cu succes. In caz contrar, programul va crapa.
	*/
	assert(my_strcmp(s1, s2) == strcmp(s1, s2));
	assert(my_memcpy(dest, src, sizeof(src)) == memcpy(dest, src, sizeof(src)));
	assert(my_strcpy(dest, src) == strcpy(dest, src));
	free(dest);

	return 0;
}
