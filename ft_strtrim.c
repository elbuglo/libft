/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 21:24:11 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/16 20:31:41 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ischarset(char const *charset, char c)
{
	int i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (ft_ischarset(set, s1[i]))
		i++;
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	j = j - 1;
	while (ft_ischarset(set, str[j]))
		j--;
	str[j + 1] = '\0';
	return (str);
}
