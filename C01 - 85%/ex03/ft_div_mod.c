/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:20:11 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/16 16:25:49 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main ()
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 25;
// 	b = 10;	
// 	ft_div_mod(a, b, &div, &mod);
// 	printf ("%d\n", div);
// 	printf ("%d", mod);
// }  