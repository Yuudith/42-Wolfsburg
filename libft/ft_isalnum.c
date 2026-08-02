/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:22:15 by jtripp            #+#    #+#             */
/*   Updated: 2026/08/02 18:03:02 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalnum(int c)
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

/*# include <stdio.h>

int	main(void)
{
   int c;
   c = 3;

   int ft_isalnum ();

   printf("%d is alphanumeric.\n", c);
   printf("%d is not alphanumeric\n", c);
}*/