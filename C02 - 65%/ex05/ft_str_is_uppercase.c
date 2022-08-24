/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:52:56 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/18 09:58:05 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)

{
	int	i;
	int	result;
	{
		i = 0;
		result = 1;
		while (str[i] != '\0')
		{
			if (!(str[i] >= 65 && str[i] <= 90))
			{
				result = 0;
			}
			i++;
		}
		return (result);
	}
}

// int main ()
// {
// int test;

// test = ft_str_is_uppercase("AMiGO");

// printf("%d", test);

// }