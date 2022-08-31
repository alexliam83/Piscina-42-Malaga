/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:54:41 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/29 11:50:21 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)

{
	long	c;
	long	i;

	c = nb;
	i = 2;
	if (c <= 0)
		return (0);
	if (c == 1)
		return (1);
	if (c >= 2)
	{
		while (i * i <= c)
		{
			if (i * i == c)
				return (i);
				i++;
		}
	}
	return (0);
}
// int	main(void)

// {
// 	printf("%d", ft_sqrt(10000));
// } 
