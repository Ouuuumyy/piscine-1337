/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:29:20 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/08 18:30:50 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	c[10];

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		c[i] = nb % 10 + 48;
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &c[i - 1], 1);
		i--;
	}
}
/*
int main()
{
	ft_putnbr(10 );
}
*/
