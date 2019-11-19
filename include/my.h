/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** my.h
*/

#ifndef	MY_H
#define MY_H
#include <stdarg.h>

int my_strlen(char const *str);
void my_putchar(char c);
void my_putstr(char *str);
int my_putnbr(int nb);
int my_printf(char *str, ...);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *str);
int my_putchar_printf(va_list list);
int my_putstr_printf(va_list list);
int my_putnbr_printf(va_list list);
int my_putchar_percentage();
int my_putnbr_octal_printf(va_list list);
int my_putnbr_hexa_up_printf(va_list list);
int my_putnbr_hexa_down_printf(va_list list);
int my_putnbr_base(int nb, char *base);
int my_putunsignednbr_printf(va_list list);
int my_putunsignednbr(int nb);
int my_putnbr_hexa_ptr_printf(va_list list);
int my_atoi(char *str);
int my_putnbr_binary_printf(va_list list);

#endif
