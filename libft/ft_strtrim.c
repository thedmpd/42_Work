/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:38:57 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 15:38:58 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*sub;
	int		i;

	while (ft_whitespace(*s))
		s++;
	i = ft_strlen(s) - 1;
	while (ft_whitespace(s[i]) && i > 0)
		i--;
	sub = ft_strsub(s, 0 , i + 1);
	return (sub);
}
