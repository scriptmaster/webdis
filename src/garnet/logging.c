



//===== @@@@ AUTO-GENERATED BELOW. ONLY EDIT ABOVE @@@@ =====//

/*package/module/namespace logging*/
//public
void log(struct http_client *c, char* s) {
  slog(c->w->s, WEBDIS_DEBUG, s, 0);
}



/*
filename: logging.ts

"\nexport function log(c: http_client, s: string) {\n    slog(c.w.s, WEBDIS_DEBUG, s, 0);\n}\n"
*/

