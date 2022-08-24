/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:10:42 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/16 17:36:42 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;	

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

// int main ()
// {

// 	int a;
// 	int b;
// 	int c;
// 	int d;

// 	a = 20;
// 	b = 4;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf ("%d\n", a);
// 	printf ("%d", b);
// }