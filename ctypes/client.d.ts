
declare global {
    type http_client = {
        w: worker
    }

    function wlog(c: http_client, s: string): void;
}

export {}

