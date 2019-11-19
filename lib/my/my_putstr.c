/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library : my_putstr
*/

#include "my.h"

void my_putstr(char *str)
{
	int i = 0;

	while (str[i])
		my_putchar(str[i++]);
}
