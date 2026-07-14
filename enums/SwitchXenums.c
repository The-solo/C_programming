#include<stdio.h>


// enums work best with the swith statements.
typedef enum {
    HTTP_BAD_REQUEST = 400,
    HTTP_UNAUTHORIZED = 401,
    HTTP_NOT_FOUND = 404,
    HTTP_TEAPOT = 418,
    HTTP_INTERNAL_SERVER_ERROR = 500
} http_error_code_t;

char *http_to_str(http_error_code_t code) {
    switch (code) {
        case HTTP_BAD_REQUEST:
            printf("400 bad request.d\n");
            break;
        case HTTP_UNAUTHORIZED:
            printf("401 unauthorized.\n");
            break;
        case HTTP_NOT_FOUND:
            printf("404 not found\n");
            break;
        case HTTP_TEAPOT:
            printf("418 I am a teapot.\n");
            break;
        case HTTP_INTERNAL_SERVER_ERROR:
            printf("500 internal server error\n");
        default:
            printf("Unknown HTTP status code.\n");
            break;
    }
}

int main() {

}
