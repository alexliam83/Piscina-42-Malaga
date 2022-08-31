/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:11:06 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/28 18:48:51 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	if (index < 0)
		return (-1);
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
	i = (ft_fibonacci(index -1) + ft_fibonacci(index -2));
		return (i);
	}
}
// int main()
// {
// 	printf("%d", ft_fibonacci(500));
// }
