/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:40:37 by svaladar          #+#    #+#             */
/*   Updated: 2025/07/14 16:13:11 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{	
		j = 1;
		while (j < argc - i - 1)
		{
			while (argv[j][k] && argv[j + 1][k] && argv[j][k] == argv[j + 1][k])
			{
				k++;
				if ((char)argv[j][k] > (char)argv[j + 1][k])
				{
					aux = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = aux;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
