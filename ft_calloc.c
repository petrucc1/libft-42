/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 03:31:00 by ssoares-          #+#    #+#             */
/*   Updated: 2022/07/21 15:36:40 by ssoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((nmemb * size) / size != nmemb)
		return (NULL);
	ptr = malloc((nmemb * size));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', (nmemb * size));
	return (ptr);
}
