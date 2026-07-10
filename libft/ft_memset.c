/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 13:04:27 by jtripp            #+#    #+#             */
/*   Updated: 2026/07/10 16:10:14 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void    *ft_memset(void* s, int c, size_t n)
{
    unsigned char*  a;
    size_t i;
    
    i = 0;
    a = (unsigned char*)s;
    while   (i < n)
    {
       a[i] = (unsigned char)c;
       i++;
    }
    return s;
}

