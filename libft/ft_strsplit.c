/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:58:24 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 15:58:26 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	size_t	cur_word;
	size_t	word_count;
	char	**words;
	char	*next;

	word_count = ft_count_objects(s, c);
	words = ft_memalloc(word_count + 1);
	if (!words)
		return (NULL);
	cur_word = 0;
	while (cur_word < word_count)
	{
		while (*s == c)
			s++;
		next = ft_strchr(s,c);
		if (next)
			words[cur_word] = ft_strsub(s, 0, (next - s));
		else
			words[cur_word] = ft_strdup(s);
		s = next;
		cur_word++;
	}
	return (words);
}