/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:54:33 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/23 10:33:17 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)

{
	int	num;

num = 0;
	while (*(str + num) != '\0')
	{
	num++;
	}
	return (num);
}

// int main()

// {

// 	printf("%d", ft_strlen("aijdoaijsdoaisjdoaijdsoi"));
// }