#include "main.h"

int _putchar(char c) {
    return write(1, &c, 1);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return (_islower(c) || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0) ? -n : n;
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (*s++) len++;
    return len;
}

void _puts(char *s) {
    write(1, s, _strlen(s));
}

char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++));
    return original_dest;
}

int _atoi(char *s) {
    int res = 0, sign = 1;
    if (*s == '-') {
        sign = -1;
        s++;
    }
    while (_isdigit(*s)) res = res * 10 + (*s++ - '0');
    return sign * res;
}

char *_strcat(char *dest, char *src) {
    char *original_dest = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return original_dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (*dest) dest++;
    while (n-- > 0 && *src) *dest++ = *src++;
    *dest = '\0';
    return original_dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (n-- > 0 && *src) *dest++ = *src++;
    while (n-- > 0) *dest++ = '\0';
    return original_dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *original_s = s;
    while (n-- > 0) *s++ = b;
    return original_s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;
    while (n-- > 0) *dest++ = *src++;
    return original_dest;
}

char *_strchr(char *s, char c) {
    while (*s && *s != c) s++;
    return (*s == c) ? s : NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s && _strchr(accept, *s++)) count++;
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (_strchr(accept, *s)) return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    if (!*needle) return haystack;
    char *p1 = haystack, *p2 = needle;
    while (*p1) {
        char *p1Begin = p1, *p2Begin = p2;
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (!*p2) return p1Begin;
        p1 = p1Begin + 1;
        p2 = p2Begin;
    }
    return NULL;
}
