/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felice <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:05:23 by felice            #+#    #+#             */
/*   Updated: 2024/03/16 15:32:21 by felice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n);

int	main(void)
{
	int	n;

	if (n < '0')
	{
		ft_putchar('N')
	}
	else
	{
		ft_putchar('P')
	}
	return (0);
}

