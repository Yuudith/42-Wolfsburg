#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    //ft_strchr

char *s = "hello";

printf("%s\n", ft_strchr(s, 'h'));   // Expected: hello
printf("%s\n", ft_strchr(s, 'e'));   // Expected: ello
printf("%s\n", ft_strchr(s, 'l'));   // Expected: llo (first l)
printf("%s\n", ft_strchr(s, 'o'));   // Expected: o

printf("%s\n", ft_strchr(s, 'z'));   // Expected: (null)

printf("%p\n", ft_strchr(s, '\0'));  // Expected: pointer (not NULL)
printf("###########end##########\n");
}