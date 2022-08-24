/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:07:16 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/18 19:55:28 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size)

{
	
	size = 0;
	while (src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	return (size);

}

int	main(void)
{
	char	src[6] = "amigos";
	char	dest[20];
	unsigned int size;
	int	cont;

	ft_strlcpy(dest, src, size);

	
		printf("%s", dest);
		printf("%c", '\n');
		printf("%d", size);
	
	
}