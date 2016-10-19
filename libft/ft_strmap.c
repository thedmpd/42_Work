/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 22:50:27 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 22:50:29 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	size_t	retlen;
	int		i;
	i = 0;
	if (!s || !f)
		return (NULL);
	retlen = ft_strlen(s);
	ret = ft_memalloc(retlen + 1);
	if(!ret)
		return(NULL);
	while (*s)
	{
		ret[i++] = f(*s);
		s++;
	}
	return (ret);
}
