/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:09:21 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/11 18:15:27 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;

	if (!(mem = (unsigned char *)malloc(sizeof(size) * count)))
		return (NULL);
	ft_memset(mem, 0, count);
	return ((void *)mem);
}
