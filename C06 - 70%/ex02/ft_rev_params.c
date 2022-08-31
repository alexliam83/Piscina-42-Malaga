/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:40:33 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/25 16:20:05 by alejandg         ###   ########.fr       */
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

int	main(int argc, char **argv)

{
	while (argc > 1)
	{	
		ft_putstr(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
}
