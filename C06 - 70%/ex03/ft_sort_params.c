/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:38:00 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/25 13:17:43 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int main (int argc, char **argv)
{

int i;
int i2;
char *swap;

i = 0;
i2 = 0;


while (i2 < argc)
{
while (argv[i] > argv[i + 1])
{
		swap = argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = swap;
		i++;
		if (argv[i] < argv[i +1])
		{
			//i = 0;
			ft_putchar(*argv[i]);
			//i++;
		}
i2++;		
}
}
}