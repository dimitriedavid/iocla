#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    int n = 5;

    printf("1 B step\n");
    // 1 B step
    char *pOne = (char *) v;
    for (int i = 0; i < n * 4; i++) {
        printf("%p -> 0x%hhx\n", pOne + i, *(pOne + i));
    }

    printf("\n2 B step\n");
    // 2 B step
    short *pTwo = (short *) v;
    for (int i = 0; i < n * 2; i++) {
        printf("%p -> 0x%hx\n", pTwo + i, *(pTwo + i));
    }

    printf("\n4 B step\n");
    // 4 B step
    int *pFour = (int *) v;
    for (int i = 0; i < n * 1; i++) {
        printf("%p -> 0x%x\n", pFour + i, *(pFour + i));
    }

    return 0;
}
