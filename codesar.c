#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <libwebsockets.h>

#define PORT 8080
#define BUFFER_SIZE 1024

// Supported languages
const char *supported_languages[] = {"C", "Python", "JavaScript", "Java", "Go"};

static int callback_echo(struct lws *wsi, enum lws_callback_reasons reason,
                         void *user, void *in, size_t len) {
    switch (reason) {
        case LWS_CALLBACK_RECEIVE:
            lws_write(wsi, (unsigned char *)in, len, LWS_WRITE_TEXT);
            printf("Received: %s\n", (char *)in);
            break;
        default:
            break;
    }
    return 0;
}

static struct lws_protocols protocols[] = {
    { "echo-protocol", callback_echo, 0, BUFFER_SIZE },
    { NULL, NULL, 0, 0 }
};

void print_supported_languages() {
    printf("Supported Languages:\n");
    for (size_t i = 0; i < sizeof(supported_languages) / sizeof(supported_languages[0]); i++) {
        printf("- %s\n", supported_languages[i]);
    }
}

int main() {
    struct lws_context_creation_info info;
    memset(&info, 0, sizeof(info));
    
    info.port = PORT;
    info.protocols = protocols;
    info.gid = -1;
    info.uid = -1;
    
    struct lws_context *context = lws_create_context(&info);
    if (!context) {
        fprintf(stderr, "Failed to create WebSocket context\n");
        return -1;
    }
    
    printf("WebSocket Server running on port %d...\n", PORT);
    print_supported_languages();
    
    while (1) {
        lws_service(context, 1000);
    }
    
    lws_context_destroy(context);
    return 0;
}
