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
	char	*new_string;

	new_string = ft_memalloc(ft_strlen(s) + 1);
	if(!new_string)
		return(NULL);
	while (*s)
	{
		new_string = f(*s);
		s++;
		new_string++;
	}
	return (new_string);
}
