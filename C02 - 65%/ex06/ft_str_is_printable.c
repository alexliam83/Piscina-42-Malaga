/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:58:40 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/18 10:17:47 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)

{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}

// int main ()
// {
// int test;

// test = ft_str_is_printable("");

// printf("%d", test);

// }
