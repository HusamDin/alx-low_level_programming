#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
