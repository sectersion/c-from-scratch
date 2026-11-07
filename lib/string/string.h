#ifndef STRING_H
#define STRING_H

unsigned long strlen(const char *s);
char *strcpy(char *dest, const char *src);
int strcmp(const char *a, const char *b);
char *strchr(const char *input, char c);
char *strcat(char *dest, const char *src);

#endif