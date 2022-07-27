/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:23:52 by ssoares-          #+#    #+#             */
/*   Updated: 2022/07/21 15:40:44 by ssoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_count;
	size_t	sub_count;
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	src_count = 0;
	while (src_count < len && s[start + src_count])
		src_count++;
	sub = (char *) malloc((1 * src_count) + 1);
	sub_count = 0;
	while (sub_count < src_count)
	{
		sub[sub_count] = s[start + sub_count];
		sub_count++;
	}
	sub[sub_count] = '\0';
	return (sub);
}
