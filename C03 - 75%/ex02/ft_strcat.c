/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:02:21 by alejandg          #+#    #+#             */
/*   Updated: 2022/08/23 20:00:42 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

i = 0;
i2 = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[i2] != '\0')
	{
dest[i] = src[i2];
i++;
i2++;
	}
dest[i] = '\0';
	return (dest);
}

// int        main(void)
// {
//     char    dest[50] = "hola";
//     char    src[50] = "fi arma";

//     //printf("%s\n", ft_strcat(dest, src));
// 	//printf("\n");
// 	printf("%s\n", strcat(dest, src));
// }