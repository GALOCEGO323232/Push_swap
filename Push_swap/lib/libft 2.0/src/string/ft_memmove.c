/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:07:32 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/15 14:31:06 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_uc;
	unsigned char		*dest_uc;
	size_t				i;

	if (dest == src || n == 0)
		return (dest);
	src_uc = (const unsigned char *)src;
	dest_uc = (unsigned char *)dest;
	i = 0;
	if (dest_uc < src_uc)
	{
		while (i < n)
		{
			dest_uc[i] = src_uc[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest_uc[n] = src_uc[n];
	}
	return (dest);
}
