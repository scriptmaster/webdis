import "client";

// @include("garnet/logging", "worker", "client")
// export default class {}

export function api_routes(c: http_client) {
    wlog(c, "hi");
}
