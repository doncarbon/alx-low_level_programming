#ifndef main_h
#define main_h

int _strlen_recursion(char *s);
void _print_rev_recursion(char *s);
void _puts_recursion(char *s);
void set_string(char **s, char *to);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void print_number(int n);
char *rot13(char *);
char *leet(char *);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
void print_array(int *a, int n);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
int _atoi(char *s);
void puts_half(char *str);
void _puts(char *str);
int _strlen(char *s);
void swap_int(int *a, int *b);
int _putchar(char c);
void reset_to_98(int *n);
char *_strcat(char *dest, char *src);

#endif
