/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:25:54 by svaladar          #+#    #+#             */
/*   Updated: 2025/07/15 11:36:41 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(*range) * (max - min));
	if (range == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			range[i] = min + i;
		return (range);
	}
}
