/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:02:47 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/11 17:31:37 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*cpy1;
	unsigned char	*cpy2;

	if (str1 == NULL || str2 == NULL)
		return (0);
	cpy1 = (unsigned char*)str1;
	cpy2 = (unsigned char*)str2;
	while (n)
	{
		if (*cpy1 != *cpy2)
			return (*cpy1 - *cpy2);
		cpy1++;
		cpy2++;
		n--;
	}
	return (0);
}
