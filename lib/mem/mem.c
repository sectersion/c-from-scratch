#include "mem.h"

void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;

    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }

    return dest;
}

void *memmove(void *dest, const void *src, size_t n) {
    const unsigned char *s = src;
    unsigned char *d = dest;

    if (d < s) {
        for (size_t i = 0; i < n; i++) {
            d[i] = s[i];
        }
    } else {
        for (size_t i = n; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }

    return dest;
}

void *memset(void *s, int c, size_t n) {
    unsigned char cpy = (unsigned char) c;
    unsigned char *ptr = s;

    for (size_t i = 0; i < n; i++) {
        ptr[i] = cpy;
    }

    return s;
}

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *ptr1 = s1;
    const unsigned char *ptr2 = s2;

    for (size_t i = 0; i < n; i++) {
        if (ptr1[i] != ptr2[i]) {
            return ptr1[i] - ptr2[i];
        }
    }
    return 0;
}