// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2026/08/02 15:51:39 by jtripp            #+#    #+#             */
// /*   Updated: 2026/08/02 15:51:44 by jtripp           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// //ft_strmapi
// char	to_upper_index(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }
// char	shift_index(unsigned int i, char c)
// {
// 	return (c + i);
// }
// //ft_striteri
// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }
// void	shift_char(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }
// ​
// //ft_lstiter
// void print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
// ​
// //ft_lstmap
// void *add_exclaim(void *content)
// {
// 	char *str = (char *)content;
// 	char *res = malloc(strlen(str) + 2);
// ​
// 	strcpy(res, str);
// 	strcat(res, "!");
// 	return res;
// }
// ​
// int main(void) {
// ​
//     //ft_isalpha
//     printf("Testing ft_isalpha:\n");
//     printf("ft_isalpha('a') = %d\n", ft_isalpha('a')); // Expected: 1
//     printf("ft_isalpha('Z') = %d\n", ft_isalpha('Z')); // Expected: 1
//     printf("ft_isalpha('1') = %d\n", ft_isalpha('1')); // Expected: 0
//     printf("ft_isalpha('!') = %d\n", ft_isalpha('!')); // Expected: 0
//     printf("ft_isalpha(' ') = %d\n", ft_isalpha(' ')); // Expected: 0
//     printf("###########end##########\n");
// ​
//     //ft_isdigit
//     printf("0 is digit? %d\n", ft_isdigit('0')); // Expected: 1
//     printf("9 is digit? %d\n", ft_isdigit('9')); // Expected: 1
//     printf("A is digit? %d\n", ft_isdigit('A')); // Expected: 0
//     printf("z is digit? %d\n", ft_isdigit('z')); // Expected: 0
//     printf("###########end##########\n");
// ​
//     //ft_isalnum
//     printf("A is alnum? %d\n", ft_isalnum('A')); // Expected: 1
//     printf("5 is alnum? %d\n", ft_isalnum('5')); // Expected: 1
//     printf("! is alnum? %d\n", ft_isalnum('!')); // Expected: 0
//     printf("  is alnum? %d\n", ft_isalnum(' ')); // Expected: 0
//     printf("# is alnum? %d\n", ft_isalnum('#')); // Expected: 0
//     printf("###########end##########\n");
// ​
//     // ft_isascii
//     printf("A is ascii? %d\n", ft_isascii('A'));      // Expected: 1
//     printf("0 is ascii? %d\n", ft_isascii('0'));      // Expected: 1
//     printf(" space is ascii? %d\n", ft_isascii(' '));  // Expected: 1
//     printf("127 is ascii? %d\n", ft_isascii(127));    // Expected: 1
//     printf("-1 is ascii? %d\n", ft_isascii(-1));      // Expected: 0
//     printf("128 is ascii? %d\n", ft_isascii(128));    // Expected: 0
//     printf("255 is ascii? %d\n", ft_isascii(255));    // Expected: 0
//     printf("1024 is ascii? %d\n", ft_isascii(1024));  // Expected: 0
//     printf("###########end##########\n");
   
// ​
// // ft_isprint
//     printf("A is printable? %d\n", ft_isprint('A'));      // Expected: 1
//     printf("0 is printable? %d\n", ft_isprint('0'));      // Expected: 1
//     printf("space is printable? %d\n", ft_isprint(' '));  // Expected: 1
//     printf("31 is printable? %d\n", ft_isprint(31));      // Expected: 0
//     printf("32 is printable? %d\n", ft_isprint(32));      // Expected: 1
//     printf("126 is printable? %d\n", ft_isprint(126));    // Expected: 1
//     printf("127 is printable? %d\n", ft_isprint(127));    // Expected: 0
//     printf("###########end##########\n");
    
// ​
// // ft_strlen
//     printf("Length of \"\" = %zu\n", ft_strlen(""));                // Expected: 0
//     printf("Length of \"a\" = %zu\n", ft_strlen("a"));              // Expected: 1
//     printf("Length of \"42\" = %zu\n", ft_strlen("42"));            // Expected: 2
//     printf("Length of \"Hello\" = %zu\n", ft_strlen("Hello"));      // Expected: 5
//     printf("###########end##########\n");
// ​
// //ft_memset
//     char arr[10] = "hello";
//     ft_memset(arr, 'A', 5);
//     printf("arr: %s\n", arr);
//     //ft_memset(arr, 'X', 10);
//     //printf("after full fill: %s\n", arr);
// ​
// //ft_bzero
//     char arr1[10] = "hello";
//     ft_bzero(arr1, 5);
//     printf("arr1: %s\n", arr1);
// ​
//     for (int i = 0; i < 10; i++)
//         printf("%d ", arr1[i]);
//     printf("\n");
//     printf("###########end##########\n");
// ​
// // ft_memcpy
// ​
// char src[] = "Hello";
// char dest[10];
// ​
// ft_memcpy(dest, src, 6);
// printf("Copied string: %s\n", dest);            // Expected: Hello
// ​
// char src2[] = "ABCDE";
// char dest2[10] = "12345";
// ​
// ft_memcpy(dest2, src2, 3);
// printf("Partial copy: %s\n", dest2);            // Expected: ABC45
// ​
// char src3[] = "42";
// char dest3[10];
// ​
// ft_memcpy(dest3, src3, 3);
// printf("Copied \"42\": %s\n", dest3);           // Expected: 42
// ​
// char src4[] = "";
// char dest4[10] = "Hello";
// ​
// ft_memcpy(dest4, src4, 1);
// printf("Empty string copy: %s\n", dest4);       // Expected: (empty string)
// printf("###########end##########\n");
// ​
// // ft_memmove
// ​
// char str1[20] = "Hello";
// ft_memmove(str1, "World", 6);
// printf("Copy string: %s\n", str1);           // Expected: World
// ​
// char str2[20] = "abcdef";
// ft_memmove(str2 + 2, str2, 4);
// printf("Overlap right: %s\n", str2);         // Expected: ababcd
// ​
// char str3[20] = "abcdef";
// ft_memmove(str3, str3 + 2, 4);
// printf("Overlap left: %s\n", str3);          // Expected: cdefef
// ​
// char str4[20] = "Hello";
// ft_memmove(str4, str4, 5);
// printf("Same address: %s\n", str4);          // Expected: Hello
// ​
// char str5[20] = "Hello";
// ft_memmove(str5, "ABCDE", 0);
// printf("Copy 0 bytes: %s\n", str5);          // Expected: Hello
// printf("###########end##########\n");
// ​
// // ft_strlcpy
// ​
//     {
//         char dest2[10];
//         ft_strlcpy(dest2, "Hello", sizeof(dest2));
//         printf("dest2: %s\n", dest2);
//     }
// ​
//     // test 2
//     {
//         char dest3[4];
//         ft_strlcpy(dest3, "Hello", sizeof(dest3));
//         printf("dest3: %s\n", dest3);
//     }
// ​
//     // test 3
//     {
//         char dest4[10];
//         ft_strlcpy(dest4, "", sizeof(dest4));
//         printf("dest4: %s\n", dest4);
//     }
//     printf("###########end##########\n");
// ​
//     // ft_strlcat
// {
// char dest1[20] = "Hello";
// size_t r1 = ft_strlcat(dest1, "World", sizeof(dest1));
// printf("dest1: %s | ret: %zu\n", dest1, r1);
// // Expected: HelloWorld | 10
// }
// {
// char dest2[10] = "Hello";
// size_t r2 = ft_strlcat(dest2, "World", sizeof(dest2));
// printf("dest2: %s | ret: %zu\n", dest2, r2);
// // Expected: HelloWor | 10
// }
// {
// char dest3[5] = "";
// size_t r3 = ft_strlcat(dest3, "Hello", sizeof(dest3));
// printf("dest3: %s | ret: %zu\n", dest3, r3);
// // Expected: Hell | 5
// }
// {
// char dest4[10] = "Hi";
// size_t r4 = ft_strlcat(dest4, "", sizeof(dest4));
// printf("dest4: %s | ret: %zu\n", dest4, r4);
// // Expected: Hi | 2
// }
//  printf("###########end##########\n");
// ​
//  // ft_toupper
// printf("a -> %c\n", ft_toupper('a'));   // Expected: A
// printf("z -> %c\n", ft_toupper('z'));   // Expected: Z
// printf("A -> %c\n", ft_toupper('A'));   // Expected: A
// printf("m -> %c\n", ft_toupper('m'));   // Expected: M
// ​
// printf("1 -> %c\n", ft_toupper('1'));   // Expected: 1
// printf("@ -> %c\n", ft_toupper('@'));   // Expected: @
// printf("space -> %c\n", ft_toupper(' ')); // Expected: space
// ​
// printf("EOF -> %d\n", ft_toupper(EOF)); // Expected: EOF (unchanged)
// printf("###########end##########\n");
// ​
// // ft_tolower
// printf("A -> %c\n", ft_tolower('A'));   // Expected: a
// printf("Z -> %c\n", ft_tolower('Z'));   // Expected: z
// printf("a -> %c\n", ft_tolower('a'));   // Expected: a
// printf("M -> %c\n", ft_tolower('M'));   // Expected: m
// ​
// printf("1 -> %c\n", ft_tolower('1'));   // Expected: 1
// printf("@ -> %c\n", ft_tolower('@'));   // Expected: @
// printf("space -> %c\n", ft_tolower(' ')); // Expected: space
// ​
// printf("EOF -> %d\n", ft_tolower(EOF));  // Expected: -1
// printf("###########end##########\n");
// ​
// // ft_strchr
// ​
// char *s = "hello";
// ​
// printf("%s\n", ft_strchr(s, 'h'));   // Expected: hello
// printf("%s\n", ft_strchr(s, 'e'));   // Expected: ello
// printf("%s\n", ft_strchr(s, 'l'));   // Expected: llo (first l)
// printf("%s\n", ft_strchr(s, 'o'));   // Expected: o
// ​
// printf("%s\n", ft_strchr(s, 'z'));   // Expected: (null)
// ​
// printf("%p\n", ft_strchr(s, '\0'));  // Expected: pointer (not NULL)
// printf("###########end##########\n");
// ​
// // ft_strrchr
// {
// char *s = "hello";
// ​
// printf("%s\n", ft_strrchr(s, 'h'));   // Expected: hello
// printf("%s\n", ft_strrchr(s, 'e'));   // Expected: ello
// printf("%s\n", ft_strrchr(s, 'l'));   // Expected: lo (LAST l)
// printf("%s\n", ft_strrchr(s, 'o'));   // Expected: o
// ​
// printf("%s\n", ft_strrchr(s, 'z'));   // Expected: (null)
// ​
// printf("%p\n", ft_strrchr(s, '\0'));  // Expected: pointer to end
// printf("###########end##########\n");
// }
// ​
// // ft_strncmp
// {
// printf("case1: %d\n", ft_strncmp("abc", "abc", 3));   // Expected: 0
// printf("case2: %d\n", ft_strncmp("abc", "abd", 3));   // Expected: negative
// printf("case3: %d\n", ft_strncmp("abd", "abc", 3));   // Expected: positive
// ​
// printf("case4: %d\n", ft_strncmp("abc", "ab", 3));    // Expected: positive
// printf("case5: %d\n", ft_strncmp("ab", "abc", 3));    // Expected: negative
// ​
// printf("case6: %d\n", ft_strncmp("hello", "he", 2));  // Expected: 0
// printf("case7: %d\n", ft_strncmp("hello", "he", 0));  // Expected: 0
// ​
// printf("case8: %d\n", ft_strncmp("", "", 5));        // Expected: 0
// printf("###########end##########\n");
// }
// ​
// // ft_memchr
// {
// char arr[] = "hello";
// ​
// printf("%s\n", (char *)ft_memchr(arr, 'h', 5)); // Expected: hello
// printf("%s\n", (char *)ft_memchr(arr, 'e', 5)); // Expected: ello
// printf("%s\n", (char *)ft_memchr(arr, 'l', 5)); // Expected: llo (first l)
// printf("%s\n", (char *)ft_memchr(arr, 'o', 5)); // Expected: o
// ​
// printf("%p\n", ft_memchr(arr, 'z', 5));         // Expected: NULL
// printf("###########end##########\n");
// }
// ​
// // ft_memcmp
// {
// printf("case1: %d\n", ft_memcmp("abc", "abc", 3));     // Expected: 0
// ​
// printf("case2: %d\n", ft_memcmp("abc", "abd", 3));     // Expected: negative
// ​
// printf("case3: %d\n", ft_memcmp("abd", "abc", 3));     // Expected: positive
// ​
// printf("case4: %d\n", ft_memcmp("abc", "ab", 3));      // Expected: positive (99)
// ​
// printf("case5: %d\n", ft_memcmp("ab", "abc", 3));      // Expected: negative (-99)
// ​
// printf("case6: %d\n", ft_memcmp("hello", "hello", 5)); // Expected: 0
// ​
// char arr1[] = {1, 2, 3, 4};
// char arr2[] = {1, 2, 3, 5};
// ​
// printf("case7: %d\n", ft_memcmp(arr1, arr2, 4));       // Expected: -1
// ​
// printf("case8: %d\n", ft_memcmp(arr1, arr2, 0));       // Expected: 0
// printf("###########end##########\n");
// ​
// }
// ​
// // ft_strnstr
// {
// char *str = "Hello World";
// ​
// printf("%s\n", ft_strnstr(str, "Hello", 11));   // Expected: Hello World
// printf("%s\n", ft_strnstr(str, "World", 11));   // Expected: World
// printf("%s\n", ft_strnstr(str, "llo", 11));     // Expected: llo World
// printf("%s\n", ft_strnstr(str, "", 11));        // Expected: Hello World
// ​
// printf("%p\n", ft_strnstr(str, "World", 5));    // Expected: NULL
// printf("%p\n", ft_strnstr(str, "abc", 11));     // Expected: NULL
// ​
// printf("%s\n", ft_strnstr("42 Network", "Net", 10)); // Expected: Network
// printf("%p\n", ft_strnstr("42 Network", "Net", 5));  // Expected: NULL
// printf("###########end##########\n");
// }
// ​
// // ft_atoi
// ​
// printf("\"42\" -> %d\n", ft_atoi("42"));                 // Expected: 42
// printf("\"-42\" -> %d\n", ft_atoi("-42"));               // Expected: -42
// printf("\"+42\" -> %d\n", ft_atoi("+42"));               // Expected: 42
// printf("\"   123\" -> %d\n", ft_atoi("   123"));         // Expected: 123
// printf("\"   -456\" -> %d\n", ft_atoi("   -456"));       // Expected: -456
// printf("\"00123\" -> %d\n", ft_atoi("00123"));           // Expected: 123
// printf("\"42abc\" -> %d\n", ft_atoi("42abc"));           // Expected: 42
// printf("\"abc42\" -> %d\n", ft_atoi("abc42"));           // Expected: 0
// printf("\"\" -> %d\n", ft_atoi(""));                     // Expected: 0
// printf("\"+\" -> %d\n", ft_atoi("+"));                   // Expected: 0
// printf("\"-\" -> %d\n", ft_atoi("-"));                   // Expected: 0
// printf("\"2147483647\" -> %d\n", ft_atoi("2147483647")); // Expected: 2147483647
// printf("\"-2147483648\" -> %d\n", ft_atoi("-2147483648"));// Expected: -2147483648
// printf("###########end##########\n");
// ​
// // ft_calloc
// {
// int *arr = ft_calloc(5, sizeof(int));
// ​
// printf("Array:\n");
// for (int i = 0; i < 5; i++)
// 	printf("%d ", arr[i]);
// printf("\n");
// // Expected: 0 0 0 0 0
// ​
// arr[0] = 10;
// arr[1] = 20;
// arr[2] = 30;
// ​
// printf("Modified:\n");
// for (int i = 0; i < 5; i++)
// 	printf("%d ", arr[i]);
// printf("\n");
// // Expected: 10 20 30 0 0
// ​
// free(arr);
// printf("###########end##########\n");
// }
// ​
// // ft_strdup
// {
// char *s1 = "hello";
// char *s2 = ft_strdup(s1);
// ​
// printf("original: %s\n", s1);   // Expected: hello
// printf("copy: %s\n", s2);       // Expected: hello
// ​
// s2[0] = 'H';
// ​
// printf("modified copy: %s\n", s2); // Expected: Hello
// printf("original again: %s\n", s1); // Expected: hello
// ​
// free(s2);
// printf("###########end##########\n");
// }
// ​
// // ft_substr
// {
// char *s = "hello world";
// ​
// printf("%s\n", ft_substr(s, 0, 5));     // Expected: hello
// printf("%s\n", ft_substr(s, 6, 5));     // Expected: world
// printf("%s\n", ft_substr(s, 6, 100));   // Expected: world
// printf("%s\n", ft_substr(s, 0, 0));     // Expected: (empty string)
// printf("%s\n", ft_substr(s, 20, 5));    // Expected: (empty string)
// ​
// printf("%s\n", ft_substr("", 0, 5));    // Expected: (empty string)
// printf("%p\n", ft_substr(NULL, 0, 5));  // Expected: (null)
// printf("###########end##########\n");
// }
// ​
// // ft_strjoin
// {
// printf("%s\n", ft_strjoin("Hello ", "World"));   // Expected: Hello World
// printf("%s\n", ft_strjoin("42", "Network"));     // Expected: 42Network
// printf("%s\n", ft_strjoin("", "test"));          // Expected: test
// printf("%s\n", ft_strjoin("test", ""));          // Expected: test
// printf("%s\n", ft_strjoin("", ""));              // Expected: (empty string)
// ​
// printf("%p\n", ft_strjoin(NULL, "abc"));         // Expected: NULL
// printf("%p\n", ft_strjoin("abc", NULL));         // Expected: NULL
// printf("###########end##########\n");
// }
// ​
// // ft_strtrim
// {
// printf("%s\n", ft_strtrim("   hello   ", " "));      // Expected: hello
// printf("%s\n", ft_strtrim("xxhelloxx", "x"));        // Expected: hello
// printf("%s\n", ft_strtrim("abc", "x"));              // Expected: abc
// printf("%s\n", ft_strtrim("aaaaa", "a"));            // Expected: (empty)
// printf("%s\n", ft_strtrim("", "a"));                 // Expected: (empty)
// ​
// printf("%s\n", ft_strtrim("  42 network  ", " "));   // Expected: 42 network
// printf("%s\n", ft_strtrim("--hello--", "-"));        // Expected: hello
// ​
// printf("%p\n", ft_strtrim(NULL, "a"));               // Expected: NULL
// printf("%p\n", ft_strtrim("abc", NULL));             // Expected: NULL
// printf("###########end##########\n");
// }
// ​
// // ft_split
// {
// char **res;
// ​
// res = ft_split("hello world 42", ' ');
// ​
// printf("%s\n", res[0]); // hello
// printf("%s\n", res[1]); // world
// printf("%s\n", res[2]); // 42
// printf("%p\n", res[3]); // NULL
// ​
// res = ft_split("   hello   world  ", ' ');
// ​
// printf("%s\n", res[0]); // hello
// printf("%s\n", res[1]); // world
// ​
// res = ft_split("xxxxhellooxxxx", 'x');
// ​
// printf("%s\n", res[0]); // helloo
// ​
// res = ft_split("", ' ');
// ​
// printf("%p\n", res); // NULL or empty array
// printf("###########end##########\n");
// }
// ​
// // ft_itoa
// {
// printf("%s\n", ft_itoa(0));           // Expected: 0
// printf("%s\n", ft_itoa(42));          // Expected: 42
// printf("%s\n", ft_itoa(-42));         // Expected: -42
// printf("%s\n", ft_itoa(123456));      // Expected: 123456
// printf("%s\n", ft_itoa(-123456));     // Expected: -123456
// printf("%s\n", ft_itoa(9));           // Expected: 9
// printf("%s\n", ft_itoa(-9));          // Expected: -9
// ​
// printf("%s\n", ft_itoa(2147483647));  // Expected: 2147483647
// printf("%s\n", ft_itoa(-2147483648)); // Expected: -2147483648
// printf("###########end##########\n");
// }
// ​
// ​
// // ft_strmapi
// {
// char *s = "abc";
// ​
// char *res1 = ft_strmapi(s, to_upper_index);
// printf("%s\n", res1);   // Expected: ABC
// ​
// char *res2 = ft_strmapi("abc", shift_index);
// printf("%s\n", res2);   // Expected: ace
// ​
// char *res3 = ft_strmapi("", to_upper_index);
// printf("%s\n", res3);   // Expected: (empty string)
// ​
// printf("%p\n", ft_strmapi(NULL, to_upper_index)); // Expected: NULL
// printf("###########end##########\n");
// }
// ​
// // ft_striteri
// {
    
// char str1[] = "hello";
// ft_striteri(str1, to_upper);
// printf("%s\n", str1); // Expected: HELLO
// ​
// char str2[] = "abc";
// ft_striteri(str2, shift_char);
// printf("%s\n", str2); // Expected: ace
// ​
// char str3[] = "";
// ft_striteri(str3, to_upper);
// printf("%s\n", str3); // Expected: (empty string)
// ​
// ft_striteri(NULL, to_upper); // Should do nothing
// printf("###########end##########\n");
// }
// ​
// // ft_putchar_fd
// ​
// printf("Expected: A\n");
// ft_putchar_fd('A', 1);
// printf("Output: ");
// printf("\n\n");
// ​
// printf("Expected: Z\n");
// printf("Output: ");
// ft_putchar_fd('Z', 1);
// printf("\n\n");
// ​
// printf("Expected: 5\n");
// printf("Output: ");
// ft_putchar_fd('5', 1);
// printf("\n\n");
// ​
// printf("Expected: @\n");
// printf("Output: ");
// ft_putchar_fd('@', 1);
// printf("\n\n");
// ​
// printf("Expected: (space)\n");
// printf("Output: ");
// ft_putchar_fd(' ', 1);
// printf("<- end\n");
// printf("###########end##########\n");
// ​
// ​
// // ft_putstr_fd
// ​
// printf("Expected: Hello\nOutput: ");
// ft_putstr_fd("Hello", 1);
// printf("\n\n");
// ​
// printf("Expected: 42 Network\nOutput: ");
// ft_putstr_fd("42 Network", 1);
// printf("\n\n");
// ​
// printf("Expected: (empty)\nOutput: ");
// ft_putstr_fd("", 1);
// printf("<- end\n\n");
// ​
// printf("Expected: @#$%%\nOutput: ");
// ft_putstr_fd("@#$%", 1);
// printf("\n\n");
// ​
// printf("Expected: (nothing)\nOutput: ");
// ft_putstr_fd(NULL, 1);
// printf("<- end\n");
// printf("###########end##########\n");
// ​
// ​
// // ft_putendl_fd
// ​
// printf("Expected: Hello + newline\nOutput:\n");
// ft_putendl_fd("Hello", 1);
// printf("\n");
// ​
// printf("Expected: 42 Network + newline\nOutput:\n");
// ft_putendl_fd("42 Network", 1);
// printf("\n");
// ​
// printf("Expected: empty line\nOutput:\n");
// ft_putendl_fd("", 1);
// printf("<- end\n\n");
// ​
// printf("Expected: NULL safe\nOutput:\n");
// ft_putendl_fd(NULL, 1);
// printf("<- end\n");
// printf("###########end##########\n");
// ​
// // ft_putnbr_fd
// ​
// printf("Expected: 42\nOutput: ");
// ft_putnbr_fd(42, 1);
// printf("\n\n");
// ​
// printf("Expected: -42\nOutput: ");
// ft_putnbr_fd(-42, 1);
// printf("\n\n");
// ​
// printf("Expected: 0\nOutput: ");
// ft_putnbr_fd(0, 1);
// printf("\n\n");
// ​
// printf("Expected: INT_MAX\nOutput: ");
// ft_putnbr_fd(2147483647, 1);
// printf("\n\n");
// ​
// printf("Expected: INT_MIN\nOutput: ");
// ft_putnbr_fd(-2147483648, 1);
// printf("\n\n");
// ​
// printf("Expected: large number\nOutput: ");
// ft_putnbr_fd(123456789, 1);
// printf("\n");
// printf("###########end##########\n");
// ​
// // ft_lstnew
// ​
// t_list *node1 = ft_lstnew("Hello");
// printf("%s\n", (char *)node1->content); // Expected: Hello
// printf("%p\n", node1->next);            // Expected: NULL
// ​
// int x = 42;
// t_list *node2 = ft_lstnew(&x);
// printf("%d\n", *(int *)node2->content); // Expected: 42
// printf("%p\n", node2->next);            // Expected: NULL
// ​
// t_list *node3 = ft_lstnew(NULL);
// printf("%p\n", node3->content);         // Expected: NULL
// printf("%p\n", node3->next);            // Expected: NULL
// printf("###########end##########\n");
// ​
// // ft_lstadd_front
// {
// t_list *node1 = ft_lstnew("B");
// t_list *node2 = ft_lstnew("C");
// ​
// t_list *head = node1;
// ​
// ft_lstadd_front(&head, node2);
// ​
// printf("%s\n", (char *)head->content);         // Expected: C
// printf("%s\n", (char *)head->next->content);   // Expected: B
// ​
// // Add another node at front
// t_list *node0 = ft_lstnew("A");
// ft_lstadd_front(&head, node0);
// ​
// printf("%s\n", (char *)head->content);         // Expected: A
// printf("%s\n", (char *)head->next->content);   // Expected: C
// printf("###########end##########\n");
// }
// ​
// // ft_lstsize
// {
// t_list *node1 = ft_lstnew("A");
// t_list *node2 = ft_lstnew("B");
// t_list *node3 = ft_lstnew("C");
// ​
// node1->next = node2;
// node2->next = node3;
// ​
// printf("Size: %d\n", ft_lstsize(node1)); // Expected: 3
// ​
// printf("Size empty: %d\n", ft_lstsize(NULL)); // Expected: 0
// ​
// t_list *single = ft_lstnew("X");
// printf("Size single: %d\n", ft_lstsize(single)); // Expected: 1
// printf("###########end##########\n");
// }
// ​
// {
//     // ft_lstlast
// ​
// t_list *node1 = ft_lstnew("A");
// t_list *node2 = ft_lstnew("B");
// t_list *node3 = ft_lstnew("C");
// ​
// node1->next = node2;
// node2->next = node3;
// ​
// printf("%s\n", (char *)ft_lstlast(node1)->content); // Expected: C
// ​
// t_list *single = ft_lstnew("X");
// printf("%s\n", (char *)ft_lstlast(single)->content); // Expected: X
// ​
// printf("%p\n", ft_lstlast(NULL)); // Expected: NULL
// printf("###########end##########\n");
// }
// ​
// // ft_lstadd_back
// {
// t_list *node1 = ft_lstnew("A");
// t_list *node2 = ft_lstnew("B");
// t_list *node3 = ft_lstnew("C");
// ​
// t_list *head = node1;
// ​
// ft_lstadd_back(&head, node2);
// ft_lstadd_back(&head, node3);
// ​
// printf("%s\n", (char *)head->content);             // A
// printf("%s\n", (char *)head->next->content);       // B
// printf("%s\n", (char *)head->next->next->content); // C
// ​
// printf("Last: %s\n", (char *)ft_lstlast(head)->content); // C
// printf("###########end##########\n");
// }
// ​
// // ft_lstdelone
// {
// char *str = malloc(10);
// str[0] = 'A';
// str[1] = '\0';
// ​
// t_list *node = ft_lstnew(str);
// ​
// printf("Before delete: %s\n", (char *)node->content);
// ​
// ft_lstdelone(node, free);
// ​
// // node is now invalid, do NOT access it
// printf("Node deleted (should not access content now)\n");
// printf("###########end##########\n");
// }
// ​
// // ft_lstclear
// {
// char *a = malloc(2); a[0] = 'A'; a[1] = '\0';
// char *b = malloc(2); b[0] = 'B'; b[1] = '\0';
// char *c = malloc(2); c[0] = 'C'; c[1] = '\0';
// ​
// t_list *node1 = ft_lstnew(a);
// t_list *node2 = ft_lstnew(b);
// t_list *node3 = ft_lstnew(c);
// ​
// node1->next = node2;
// node2->next = node3;
// ​
// printf("Before clear: %s\n", (char *)node1->content);
// ​
// ft_lstclear(&node1, free);
// ​
// printf("After clear: %p\n", node1); // Expected: NULL
// printf("###########end##########\n");
// }
// ​
// {
// ​
// // ft_lstiter
// ​
// char *a = "A";
// char *b = "B";
// char *c = "C";
// ​
// t_list *n1 = ft_lstnew(a);
// t_list *n2 = ft_lstnew(b);
// t_list *n3 = ft_lstnew(c);
// ​
// n1->next = n2;
// n2->next = n3;
// ​
// printf("Iterating list:\n");
// ft_lstiter(n1, print_content);
// printf("###########end##########\n");
// }
// ​
//    // ft_lstmap
// {
// t_list *n1 = ft_lstnew("A");
// t_list *n2 = ft_lstnew("B");
// t_list *n3 = ft_lstnew("C");
// ​
// n1->next = n2;
// n2->next = n3;
// ​
// t_list *new_list = ft_lstmap(n1, add_exclaim, free);
// ​
// printf("%s\n", (char *)new_list->content);         // A!
// printf("%s\n", (char *)new_list->next->content);   // B!
// printf("%s\n", (char *)new_list->next->next->content); // C! 
// printf("###########end##########\n");
// }
// ​
// return 0;
// }
