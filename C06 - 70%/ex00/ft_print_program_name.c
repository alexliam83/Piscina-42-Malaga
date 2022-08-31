/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:41:23 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/25 17:36:38 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char a)

{
	write(1, &a, 1);
	return (0);
}

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char *argv[])

{
	if (argc != 0)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
	}
}
