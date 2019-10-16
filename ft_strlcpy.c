/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:47:05 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/11 18:02:22 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	if (size == 0)
		return (ft_strlen(src));
	n = 0;
	while (size > 1 && *src)
	{
		*dst = *src;
		++dst;
		++src;
		size--;
		n++;
	}
	*dst = '\0';
	while (*dst || *src)
	{
		if (*src)
		{
			++src;
			n++;
		}
	}
	return (n);
}
