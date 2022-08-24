/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:16:43 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/15 14:58:21 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_while(char a, char b, char c, char d);
void	my_write(char a, char b, char c, char d);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
	b = '0';
		while (b <= '9')
		{
			c = '0';
			my_while(a, b, c, d);
			b++;
		}	
		a++;
	}
}

void	my_write(char a, char b, char c, char d)
{
	if (a <= c && b < d)
	{	
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, " ", 2);
		write (1, &c, 1);
		write (1, &d, 1);
		if (a != '9' || b != '8' || c != '9' || d != '9')
		{
			write (1, ", ", 2);
		}
	}	
}

void	my_while(char a, char b, char c, char d)
{
	while (c <= '9')
	{	
	d = '0';
		while (d <= '9')
		{			
			my_write(a, b, c, d);
			d++;
		}	
		c++;
	}
}
