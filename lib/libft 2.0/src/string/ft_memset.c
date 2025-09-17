/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:30:20 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/15 14:31:08 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt;
	unsigned char	value;

	pt = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		pt[i] = value;
		i++;
	}
	return (s);
}
