#include<stdio.h>
#include <string.h>

typedef struct {
  size_t length;
  char buffer[64];
} TextBuffer;

int smart_append(TextBuffer *dest, const char *src) {

    if (dest->buffer == NULL  || src == NULL){ // checking for null pointer.
        return 1;
    }

    const int maxxbuff = 64;
    int srcLen = strlen(src);

    if(srcLen >= (maxxbuff - dest->length)) {
        strncat(dest->buffer, src, dest->length-1);
        dest->length = maxxbuff; // pointer to struct values. "*(dest).length" also works but verbose.
        return 1;

    } else if(srcLen <= (maxxbuff - dest->length)) {
        strcat(dest->buffer,src);
        dest->length = dest->length + srcLen;
        return 0;

    } else {
        return 1; //Default return.
    }
}

// NOTE : The strcat & strncat adds '\0' automatically and the end.


int main() {
    return 0;
}
