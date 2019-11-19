/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library : my_atoi 
*/

int my_atoi(char *str)
{
	int i = 0;
	int nb = 0;

	while (str && str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}
