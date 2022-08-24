/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:44:21 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/14 16:09:59 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int numero;
	char unidades;
	numero = nb / 10;
	unidades = numero + 48;
	int numero2;
	char decenas;
	numero2 = nb % 10;
	decenas = numero2 + 48;
	write (1, &decenas, 1);
	write (1, "\n", 1);
	ft_putnbr(unidades);
	write (1, &unidades, 1);

	if (unidades > 9)
	{
		ft_putnbr(unidades);
	}
}
int main(nb)
    {
    ft_putnbr(14);
    return(0);
    }
