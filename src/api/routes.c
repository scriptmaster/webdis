#include "garnet/logging.h"
#include "worker.h"
#include "client.h"


//===== @@@@ AUTO-GENERATED BELOW. ONLY EDIT ABOVE @@@@ =====//

/*package/module/namespace routes*/
//public
void api_routes(struct http_client *c) {
  wlog(c, "hi");
}



/*
filename: routes.ts

"import \"client\";\n\nexport function api_routes(c: http_client) {\n    wlog(c, \"hi\");\n}\n"
*/

