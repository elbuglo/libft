/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:52:14 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/09 20:01:38 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	char		*cpy;

	if (str == NULL)
		return (NULL);
	i = 0;
	cpy = (void*)str;
	while (i < n)
	{
		if (cpy[i] == (char)c)
			return (cpy + i);
		i++;
	}
	return (NULL);
}
