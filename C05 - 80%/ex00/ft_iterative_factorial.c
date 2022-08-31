/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:51:05 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/29 09:50:09 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)

{
	int	i;

i = 1;
	if ((nb >= 0) && (nb <= 2147483647))
	{
		while (nb != 0)
		{
	i = i * nb;
	nb--;
		}
		return (i);
	}
	return (0);
}

// int main()
// {
// int a;
// a = 0;
// {
// 	a = ft_iterative_factorial(3);
// 	printf("%d", a);
// }
// }