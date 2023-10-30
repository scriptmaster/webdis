#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
void long_to_string_usage() {
	const char *ptr = "long_to_string_usage";
	size_t length = strlen(ptr);

	char s_outsz[10];
	long_to_string(length, s_outsz);
}
*/

void long_to_string(long long_value, char* s_outsz) {
	snprintf(s_outsz, 10, "%ld", long_value);
}
