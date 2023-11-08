struct HTTPRequest;
struct HTTPResponse;
struct HTTPResponse *fetch(struct HTTPRequest *request);

struct HTTPController {
    struct HTTPRequest *request;
    struct HTTPResponse *response;
    void (*fetch)(struct HTTPController *);
    fetch = &fetch;

};

// Path: tests/HTTP.c
struct HTTPRequest {
    char *method;
    char *path;
    char *version;
    struct HTTPHeader *headers;
    char *body;
};

// Path: tests/HTTP.c
struct HTTPResponse {
    char *version;
    int status;
    char *reason;
    struct HTTPHeader *headers;
    char *body;
};

// Methods: fetch
struct HTTPResponse *fetch(struct HTTPRequest *request) {
    struct HTTPResponse *response = malloc(sizeof(struct HTTPResponse));
    response->version = "HTTP/1.1";
    response->status = 200;
    response->reason = "OK";
    response->headers = NULL;
    response->body = "Hello, World!";
    return response;
}