/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 00:27:46 by oukadir           #+#    #+#             */
/*   Updated: 2024/07/28 17:43:39 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	num;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		num = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = num;
		i++;
	}
}
