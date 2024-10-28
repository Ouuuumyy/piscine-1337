/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:37:25 by oukadir           #+#    #+#             */
/*   Updated: 2024/07/25 17:23:25 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write_number(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = (n / 10) + 48;
		write(1, &c, 1);
		c = (n % 10) + 48;
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	n[2];

	n[0] = 0;
	while (n[0] <= 98)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 99)
		{
			ft_write_number(n[0]);
			write(1, " ", 1);
			ft_write_number(n[1]);
			if (n[0] != 98)
				write(1, ", ", 2);
			n[1]++;
		}
		n[0]++;
	}
}
