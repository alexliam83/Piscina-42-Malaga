/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:00:45 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/24 10:22:00 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	i;
	unsigned int	i2;

i = 0;
i2 = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[i2] != '\0' && i2 < nb)
	{
dest[i] = src[i2];
i++;
i2++;
	}
dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
//     char    dest[50] = "hola";
//     char    *src;

//     src = "fegasd";
//     printf("%s\n", ft_strncat(dest, src, 4));
// } CORREGIDO 