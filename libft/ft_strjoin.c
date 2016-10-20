/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:15:22 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 15:15:29 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_string;

	new_string = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!new_string)
		return (NULL);
	new_string = ft_strcpy(new_string, s1);
	new_string = ft_strcat(new_string, s2);
	return (new_string);
}
