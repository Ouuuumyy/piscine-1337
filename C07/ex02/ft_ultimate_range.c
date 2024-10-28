/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:51:45 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/13 23:14:53 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*result;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	result = malloc(size * sizeof(int));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int main()
{
	int i;
	int size;
	int *tab;

	i = 0;
	size = ft_ultimate_range(&tab, 10, 15);

	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("%d", size);

}
*/
