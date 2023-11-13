// declare enum header_copy {
// 	HEADER_COPY_NONE = 0,
// 	HEADER_COPY_KEY = 1,
// 	HEADER_COPY_VALUE = 2,
// 	HEADER_CHECK_DUPE = 4
// }

// declare enum webdis_log {
//     WEBDIS_DEBUG = 0,
// }

declare global {
    // const WEBDIS_DEBUG = 0;

    function slog(s: server, level: log_level, body: string, sz: size_t): void;
}

export {};
