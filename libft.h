#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int ft_isalnum(int c);
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void ft_bzero(void *s, size_t n);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *ptr, int value, size_t num);
char *ft_strchr(const char *str, int c);
char *ft_strdup(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strchr(const char *str, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *str, int c);
int ft_tolower(int ch);
int ft_toupper(int ch);

#endif