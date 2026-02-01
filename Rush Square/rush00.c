/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorossel <jorossel@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 21:17:48 by jorossel          #+#    #+#             */
/*   Updated: 2026/02/01 12:55:51 by clakhdac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int x, int y)
{
	int	i;

	(void) y;
	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	write(1, "\n", 1);
}

void	mid(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y - 2)
	{
		i = 0;
		while (i < x)
		{
			if (i == 0 || i == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
		return ;
	if (y == 1)
	{
		top(x, y);
	}
	else
	{
		top(x, y);
		mid(x, y);
		top(x, y);
	}
}
