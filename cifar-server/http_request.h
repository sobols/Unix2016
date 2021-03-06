#pragma once

#include "stringbuilder.h"

#include <stdbool.h>

struct THttpRequest {
    char* Method;
    char* Path;
    char* QueryString;
};

void THttpRequest_Init(struct THttpRequest* self);
bool THttpRequest_Receive(struct THttpRequest* self, int sockfd);
void THttpRequest_Destroy(struct THttpRequest* self);
