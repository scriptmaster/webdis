
export function log(c: http_client, s: string) {
    slog(c.w.s, WEBDIS_DEBUG, s, 0);
}
