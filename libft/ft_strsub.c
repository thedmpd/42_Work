/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:15:12 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 15:15:13 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	sub = ft_strnew(len);
	i = start;
	if (!*sub)
		return (NULL);
	while ((i - start) < len)
	{
		sub[i - start] = s[i];
		i++;
	}
	return (sub);
}
