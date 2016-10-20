/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:04:24 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 15:04:25 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	i;

	i = 0;
	new_string = ft_memalloc(ft_strlen(s) + 1);
	if (!new_string)
		return (NULL);
	while (*s)
	{
		new_string[i] = f(i, *s);
		s++;
		i++;
	}
	return (new_string);
}
