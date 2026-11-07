#include "string.h"

#define NULL ((void *)0)

unsigned long strlen(const char *s) {
    int count = 0;

    while (*s != '\0') {
        count++;
        s++;
    }

    return count;
}

char *strcpy(char *dest, const char *src) {
    char *origin = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;

    }
    *dest = '\0';

    return origin;
}

int strcmp(const char *a, const char *b) {
    while (*a != '\0' || *b != '\0') {
        if (*a != *b) {
            return *a - *b;
        } else {
            a++;
            b++;
        }
    }

    return 0;
}

char *strchar(const char *input, char c) {
    while (*input != '\0') {
        if (*input == c) {
            return input;
        } else {
            input++;
        }
    }

    return NULL;
}

char *strcat(char *dest, const char *src) {
    char *origin = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    
    return origin;
}