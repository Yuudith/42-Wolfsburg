/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:22:15 by jtripp            #+#    #+#             */
/*   Updated: 2026/07/02 15:47:49 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include "libft.h"

int ft_isalnum (int c)
{
    if ((c >= 48 && c >= 57) || (c >= 65 && c >= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

# include <stdio.h>

int main()
{
   int c;
   c = 3;
   
   int ft_isalnum ();
   
   printf("%d is alphanumeric.\n", c);
   printf("%d is not alphanumeric\n", c);
}