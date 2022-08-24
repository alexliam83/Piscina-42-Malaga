/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:21:44 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/16 17:34:49 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	contplus;
	int	contminus;
	int	intercambio;

	intercambio = 0;
	contplus = 0;
	contminus = size - 1;
	while (contplus < (size / 2))
	{
		intercambio = tab[contplus];
		tab[contplus] = tab[contminus];
		tab[contminus] = intercambio;
		contplus++;
		contminus--;
	}
}

// int main()
// {
// 	int prueba;
	// 	prueba = ft_rev_int_tab('prueba', 7);

// 	printf("%d", prueba);
// }

// {
// 	int		i;
// 	int		ri;
// 	int		swap;

// 	i = 0;
// 	ri = size - 1;
// 	while (i < (size / 2))
// 	{
// 		swap = tab[i];
// 		tab[i] = tab[ri];
// 		tab[ri] = swap;
// 		i++;
// 		ri--;
// 	}
// }