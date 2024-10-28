/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 22:21:06 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/04 13:45:31 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			res = 0;
		}
		else
		{
			res = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (res);
}
/*
int main()
{
	char *first_str = "Aeeks";
    char *second_str = "GeeksB";
 
    printf("Return value of : %d",
           ft_strcmp(first_str, second_str));
}
*/
