#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*additional functions*/
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int **multi(int r, int c);
char *_memset(char *s, char b, size_t n);

#endif
