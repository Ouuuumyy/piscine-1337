/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:36:03 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/12 11:58:44 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*c;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	c = malloc((len + 1) * sizeof(char));
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
int main()
{
	char *c = "hello  world";
	printf("%s", ft_strdup(c));
}
*/
