#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern) {
	static char str[100];
	strcpy(str, s);
	int diff = (int) (strstr(s, pattern) - s);
	strcpy(str + diff, str + diff + strlen(pattern));
	return str;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";

	// Decomentati linia dupa ce ati implementat functia delete_first.
	printf("%s\n", delete_first(s, pattern));

	return 0;
}
