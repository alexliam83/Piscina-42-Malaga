/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:43:07 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/29 11:49:03 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)

{
	int		i;

i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
	i = i * nb;
	power--;
	}
	return (i);
}

// int main()

// {
// int a;

// a = 0;
// {
// 	a = ft_iterative_power(-5, -2);
// 	printf("%d", a);
// }
// } 