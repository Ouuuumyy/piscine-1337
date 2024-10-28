/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:59:54 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/13 23:06:36 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int main()
{
	int *tab;
	int i;
	int min = 5;
	int max = 2;
	int  size;
	i = 0;
	size = max - min;
	tab= ft_range(min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/
