/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:22:33 by jtripp            #+#    #+#             */
/*   Updated: 2026/07/10 16:10:26 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t ft_strlen(const char* str)
{
    size_t i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

# include <stdio.h>

/*int     main(void)
  {
      char name[] = "42Wolfsburg\n";
      printf("%s", name);
      
      printf("%ld\n", ft_strlen(name));
      return (0);
  }*/