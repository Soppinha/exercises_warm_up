/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:15:11 by svaladar          #+#    #+#             */
/*   Updated: 2025/07/15 11:23:31 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp_dest;

	temp_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp_dest);
}	

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	return (ft_strcpy(copy, src));
}
