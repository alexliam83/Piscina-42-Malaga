/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:34:02 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/23 10:47:27 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)

{
	int	num;

num = 0;
	while (*(str + num) != '\0')
	{
		write(1, str + num, 1);
			num++;
	}
}

// int main()

// {
// 	ft_putstr("aiusdhaiusdhiaushdiasuhdsiuhda");
// 	return(1);
// }