/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:58:48 by jtripp            #+#    #+#             */
/*   Updated: 2026/07/10 15:17:41 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;

	if (dst == NULL && src == NULL)
		return (NULL);
	dstptr = (unsigned char *)dst;
	srcptr = (const unsigned char *)src;
	if (dstptr > srcptr)
	{
		while (len > 0)
		{
			len--;
			dstptr[len] = srcptr[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*dstptr = *srcptr;
			dstptr++;
			srcptr++;
			len--;
		}
	}
	return (dst);
}