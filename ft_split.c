/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 03:11:24 by ssoares-          #+#    #+#             */
/*   Updated: 2022/07/21 15:39:21 by ssoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size_array(const char *s, char c)
{
	int		is_new_word;
	size_t	words;

	is_new_word = 0;
	words = 0;
	while (*s)
	{
		if (is_new_word == 0 && *s != c)
		{
			is_new_word = 1;
			words++;
		}
		else if (is_new_word == 1 && *s == c)
			is_new_word = 0;
		s++;
	}
	return (words);
}

static size_t	ft_size_word(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*ft_free_mat(char **tab, size_t limit)
{
	while (limit--)
		free(tab[limit]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	size_t	len;
	size_t	size_array;
	size_t	counter;

	if (!s)
		return (NULL);
	size_array = ft_size_array(s, c);
	mat = (char **)malloc(sizeof(char *) * (size_array + 1));
	if (!mat)
		return (NULL);
	counter = 0;
	while (counter < size_array)
	{
		len = ft_size_word(s, c);
		if (len > 0)
		{
			mat[counter] = ft_substr(s, 0, len);
			if (mat[counter++] == NULL)
				return (ft_free_mat(mat, counter - 1));
		}
		s += len + 1;
	}
	mat[counter] = NULL;
	return (mat);
}
