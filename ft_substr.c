/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:35:43 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 18:16:31 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	src = (void *)s;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (i < len)
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
