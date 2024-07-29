/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felice <namkamch@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 02:21:10 by felice            #+#    #+#             */
/*   Updated: 2024/07/30 02:28:40 by felice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 100)
	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(k / 10 + '0');
			ft_putchar(k % 10 + '0');
			if ((i / 10 != 9) || (i % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
