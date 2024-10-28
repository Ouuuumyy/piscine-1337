/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:11:12 by oukadir           #+#    #+#             */
/*   Updated: 2024/07/31 21:37:29 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	is_specialchar(char c)
{
	if (!((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9')))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str )
{
	int		i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (is_specialchar(str[i]) == 1)
		{
			if (str[i] && str[i + 1] >= 'a'
				&& str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main ()
{

	char c [] = "salut je suis oumaima ? 42 nice+To-meet=you!";
	
	//char c[] =  "ABBJJJ";
	//printf("%s", ft_strlowcase(c));

	printf("%s", ft_strcapitalize(c));
}
*/
