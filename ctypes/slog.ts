
declare global {
    enum log_level {
        WEBDIS_ERROR = 0,
        WEBDIS_WARNING,
        WEBDIS_NOTICE,
        WEBDIS_INFO,
        WEBDIS_DEBUG,
        WEBDIS_TRACE = 8
    }

    const WEBDIS_ERROR = log_level.WEBDIS_ERROR;
    const WEBDIS_WARNING = log_level.WEBDIS_WARNING;
    const WEBDIS_NOTICE = log_level.WEBDIS_NOTICE;
    const WEBDIS_INFO = log_level.WEBDIS_INFO;
    const WEBDIS_DEBUG = log_level.WEBDIS_DEBUG;
    const WEBDIS_TRACE = log_level.WEBDIS_TRACE;
}

export {}
