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

	if(!*s || !*f)
		return(NULL);
	new_string = ft_memalloc(sizeof(char) * (ft_strlen(s) + 1));
	while(*s)
	{
		new_string = f((char)*s);
		s++;
		new_string++;
	}
	return(new_string);
}
