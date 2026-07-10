/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:40:58 by jtripp            #+#    #+#             */
/*   Updated: 2026/07/10 16:10:07 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dstptr = dst;
    const unsigned char *srcptr = src;
    size_t i = 0;

    while (i < n)
    {
        *dstptr = *srcptr;
        dstptr++;
        srcptr++;
        i++; 
    }
    return dst;
}