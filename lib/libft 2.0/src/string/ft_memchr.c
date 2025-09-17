/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:00:28 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/15 14:30:58 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_uc;
	unsigned char		byt;

	i = 0;
	s_uc = (const unsigned char *)s;
	byt = (unsigned char)c;
	while (i < n)
	{
		if (s_uc[i] == byt)
			return ((void *)(s_uc + i));
		i++;
	}
	return (NULL);
}
