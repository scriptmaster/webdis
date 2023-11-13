#include "slog.h"
#include "worker.h"
#include "client.h"
// These lines are manually typed to import

//===== @@@@ AUTO-GENERATED BELOW. ONLY EDIT ABOVE @@@@ =====//

/*package/module/namespace logging*/
//public
void wlog(struct http_client *c, char* s) {
  slog(c->w->s, WEBDIS_DEBUG, s, 0);
}



/*
filename: logging.ts

"\nexport function wlog(c: http_client, s: string) {\n    slog(c.w.s, WEBDIS_DEBUG, s, 0);\n}\n"
*/

