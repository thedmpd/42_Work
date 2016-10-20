/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:52:48 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/25 11:52:49 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strstr() function locates the first occurrence of the null-terminated
**string little in the null-terminated string big.
*/

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] == big[i + j])
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
