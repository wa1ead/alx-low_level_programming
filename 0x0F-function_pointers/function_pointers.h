#define FUNCTION_POINTERS_H
#ifndef FUNCTION_POINTERS_H

#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void(*f)(char *));

#endif
