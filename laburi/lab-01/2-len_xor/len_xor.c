#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100

int my_strlen(const char *str)
{
    int len = 0;
    while (*(str + len)) {
        len++;
    }
    return len;
}

void equality_check(const char *str)
{
    int i, j, len;
    len = my_strlen(str) - 1;
    for (i = 0; i < len; i++) {
        j = (i + (1 << i)) % len;
        if (!(*(str + i) - *(str + j))) {
            printf("Address of %c: %p\n", *(str + i), str + i);
        }
    }
}

int main(void)
{
    char *a;
    a = malloc(MAX_LEN * sizeof(char));
    fgets(a, MAX_LEN - 2, stdin);
    printf("length = %d\n", my_strlen(a) - 1);
    equality_check(a);
    free(a);
	return 0;
}
