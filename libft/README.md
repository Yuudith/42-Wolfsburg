This project has been created as part of the 42 curriculum by jtripp.

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.  
The goal of this project is to recreate a selection of standard C library functions and to implement additional utility functions that are commonly useful in later C projects.

The library includes functions for:

- character checks and ASCII transformations
- memory manipulation
- string handling
- string allocation and transformation
- file descriptor output
- linked list creation, traversal, modification, and deletion

Through this project, I practiced core C concepts such as pointer arithmetic, memory allocation, null-terminated strings, function pointers, structs, linked lists, and Makefile-based compilation.

The final result is a static library named:


libft.a

This library can be reused in future C projects by including the header file:

#include "libft.h"


---

## Instructions

Compilation

To compile the library, run:

make

This creates the static library:

libft.a

Cleaning object files

To remove object files, run:

make clean

Full clean

To remove object files and the compiled library, run:

make fclean

Rebuild

To fully rebuild the library, run:

make re


---

## Project Structure

The project contains:

libft.h
Makefile
ft_*.c

Header file

The libft.h file contains:

required system includes

function prototypes

the t_list struct definition for linked list functions


The linked list structure is defined as:

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

Makefile

The Makefile compiles all source files into object files and archives them into libft.a.

The list functions are included as part of the regular curriculum and are compiled with the mandatory source files.


---

## Function Groups

Character Checks and ASCII Transforms

These functions check character properties or transform ASCII characters:

ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_toupper
ft_tolower

Memory Functions

These functions work directly with raw memory:

ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_memchr
ft_memcmp

String Functions

These functions operate on null-terminated strings:

ft_strlen
ft_strlcpy
ft_strlcat
ft_strchr
ft_strrchr
ft_strncmp
ft_strnstr

Conversion and Allocation Functions

These functions convert values or allocate new memory:

ft_atoi
ft_calloc
ft_strdup
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa

Function Application on Strings

These functions apply another function to string characters:

ft_strmapi
ft_striteri

File Descriptor Output

These functions write characters, strings, or numbers to a given file descriptor:

ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd

Linked List Functions

These functions create, modify, inspect, delete, and transform linked lists:

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap


---

## Usage Example

Example of compiling a file with libft.a:
```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```
Example main.c:
```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello, Libft!");
	if (str == NULL)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
```

---

## Resources

The following resources were useful for understanding the concepts used in this project:

https://www.geeksforgeeks.org/c/c-programming-language/

Linux manual pages, especially:

man malloc

man free

man write

man strlen

man memcpy

man memmove


42 Libft subject

C reference documentation for standard library behavior

Peer discussions and code reviews during the 42 curriculum



---

AI Usage

AI was used as a learning and support tool during this project.

It was used for:

explaining C concepts such as pointers, double pointers, structs, memory allocation, and linked lists

breaking down algorithms before implementation

helping organize functions into study groups

clarifying Makefile structure and compilation logic

drafting documentation and README structure


AI was not used as a replacement for understanding or writing the project independently.
The final code was reviewed, tested, and adapted manually as part of the learning process.
