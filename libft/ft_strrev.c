/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 13:51:50 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 13:51:52 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*temp;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(s);
	temp = ft_strnew(len);
	i = 0;
	j = len - 1;
	while (i < len)
	{
		temp[i] = s[j - i];
		i++;
	}
	return (temp);
}
