/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:54:50 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/07 18:06:14 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lens;
	unsigned int	lend;

	i = 0;
	lens = 0;
	lend = 0;
	while (dest[lend])
		lend++;
	while (src[lens])
		lens++;
	if (size == 0 || size <= lend)
		return (size + lens);
	while (src[i] && i < size - lend - 1)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}
/*
int main()
{
	char a[] ="he";
	char b[] = "world";

	printf("%d", ft_strlcat(a, b,5));
	ft_strlcat(a, b, 5);
	printf("%s", a);
}
*/
