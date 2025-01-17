#include "server.h"

#include <stdlib.h>

int
main(int argc, char *argv[]) {

	struct server *s;

#ifdef DEBUG
	printf("Starting kingdom\n");
#endif

	if(argc > 1) {
		s = server_new(argv[1]);
	} else {
		s = server_new("webdis.json");
	}

	server_start(s);

	return EXIT_SUCCESS;
}

