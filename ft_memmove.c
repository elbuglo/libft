/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:15:24 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/16 22:13:26 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t		i;

	if (!str1 || !str2)
		return (NULL);
	if (str2 < str1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)str1)[i] = ((char *)str2)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
