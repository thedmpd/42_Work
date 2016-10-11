/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:52:35 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/25 11:52:36 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *source_1, const char *source_2)
{
	size_t max;

	max = ft_max(ft_strlen(source_1), ft_strlen(source_2));
	return (ft_strncmp(source_1, source_2, max));
}