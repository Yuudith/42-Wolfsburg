/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:40:58 by jtripp            #+#    #+#             */
/*   Updated: 2026/08/02 17:42:09 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr = src;
	size_t				i;

	*dstptr = dst;
	i = 0;
	while (i < n)
	{
		*dstptr = *srcptr;
		dstptr++;
		srcptr++;
		i++;
	}
	return (dst);
}
