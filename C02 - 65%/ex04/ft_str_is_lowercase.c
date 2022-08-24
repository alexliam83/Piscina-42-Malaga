/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:48:02 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/18 09:52:13 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)

{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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

// test = ft_str_is_lowercase("");

// printf("%d", test);

// }