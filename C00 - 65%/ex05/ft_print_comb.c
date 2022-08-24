/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:15:29 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/15 12:50:53 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_write(char d, char e, char f);
void	ft_print_comb(void);

void	my_write(char d, char e, char f)
{
	write (1, &d, 1);
	write (1, &e, 1);
	write (1, &f, 1);
	if (d != '7' || e != '8' || f != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{	
				b = '0';
		while (b <= '8')
		{
				c = '0';
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					my_write(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
