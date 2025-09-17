/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:16:01 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/15 14:31:35 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				len;
	unsigned char	uc;

	i = 0;
	len = 0;
	uc = (unsigned char)c;
	while (s[len] != '\0')
	{
		len++;
	}
	i = len;
	while (i >= 0)
	{
		if (s[i] == uc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
