/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:36:15 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/18 09:47:29 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)

{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
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

// test = ft_str_is_numeric("1f");

// printf("%d", test);

// }