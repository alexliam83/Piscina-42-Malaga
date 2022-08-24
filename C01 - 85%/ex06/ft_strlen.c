/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:28:42 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/16 11:20:23 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)

{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

//  int main()
//  {
//  	int count;

//  	count = 0;
// // 	// printf("%d", count);
//  	count = ft_strlen("hola mi amor tengo que hablar contigo");
//  	printf("%d", count);
//  }