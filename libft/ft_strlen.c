/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:22:33 by jtripp            #+#    #+#             */
/*   Updated: 2026/08/02 17:53:02 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//# include <stdio.h>

/*int     main(void)
  {
		char name[] = "42Wolfsburg\n";
		printf("%s", name);

		printf("%ld\n", ft_strlen(name));
		return (0);
  }*/