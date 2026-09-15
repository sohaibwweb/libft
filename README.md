*This activity has been created as part of the 42 curriculum by sabu-msa.*

# libft

## Description

**libft** is one of the first projects of the 42 core curriculum. The goal of this project is to code a personal library in C, re-implementing a set of standard C library functions from scratch, as well as adding a few additional utility functions that will be reused in later projects at 42 (such as ft_printf, get_next_line, minishell, etc.).

This project is a first step toward understanding how standard functions work internally, practicing memory management with malloc/free, and building good coding habits (following the 42 Norm coding style).

The library is organized into three parts:
- **Part 1**: re-implementation of standard libc functions (ctype.h, string.h, stdlib.h).
- **Part 2**: additional string-related functions (creation, manipulation, and printing utilities).
- **Part 3**: functions to create and manipulate chained lists (linked lists).

## Instructions

### Compilation

Clone the repository and run the following commands at the root of the project:

```bash
make        # compiles the mandatory part and generates libft.a
make bonus  # compiles the bonus part (linked list functions) as well
make clean  # removes the .o files
make fclean # removes the .o files and the libft.a
make re     # recompiles everything from scratch
```

### Usage

To use the library in another project, include the header and link the library when compiling:

```c
#include "libft.h"
```

```bash
gcc your_file.c -L. -lft -I.
```

Make sure `libft.a` and `libft.h` are accessible (either in the same directory or by adjusting the paths with `-L` and `-I`).

## Resources

- [42 Norm](https://github.com/42School/norminette) — the coding style all functions must follow.
- [C Standard Library reference (cppreference)](https://en.cppreference.com/w/c) — used to check the original behavior of the functions being reimplemented (ft_strlen, ft_memcpy, ft_atoi, etc.).
- Linux man pages (`man 3 <function>`) — main reference used to understand parameters, return values, and edge cases of each function before reimplementing it.

### AI Usage

AI (Claude) was used exclusively as a support tool, not to write the mandatory or bonus functions themselves. Specifically, it was used for:
- Getting additional sources and references to better understand some concepts (such as memory allocation, pointer manipulation, and edge cases of certain standard functions).
- Getting deeper explanations on some specific details while implementing the functions.
- Helping structure and draft this README.md file according to the required format.

All the functions of the library (Part 1, Part 2, and the linked list part) were implemented and understood by me.

## Library Description

### Part 1 — Libc functions

| Function | Description |
|---|---|
| ft_isalpha | Checks if a character is an alphabetic letter |
| ft_isdigit | Checks if a character is a digit |
| ft_isalnum | Checks if a character is alphanumeric |
| ft_isascii | Checks if a character is an ASCII character |
| ft_isprint | Checks if a character is printable |
| ft_strlen | Returns the length of a string |
| ft_memset | Fills a memory area with a given byte |
| ft_bzero | Fills a memory area with zeros |
| ft_memcpy | Copies a memory area to another |
| ft_memmove | Copies a memory area to another, handles overlapping areas |
| ft_strlcpy | Copies a string into a destination buffer of a given size |
| ft_strlcat | Concatenates a string to a destination buffer of a given size |
| ft_toupper | Converts a character to uppercase |
| ft_tolower | Converts a character to lowercase |
| ft_strchr | Locates the first occurrence of a character in a string |
| ft_strrchr | Locates the last occurrence of a character in a string |
| ft_strncmp | Compares two strings up to n characters |
| ft_memchr | Locates a byte in a memory area |
| ft_memcmp | Compares two memory areas |
| ft_strnstr | Locates a substring in a string, within a given length |
| ft_atoi | Converts a string to an integer |
| ft_calloc | Allocates and zero-initializes memory |
| ft_strdup | Duplicates a string |

### Part 2 — Additional functions

| Function | Description |
|---|---|
| ft_substr | Returns a substring from a given string |
| ft_strjoin | Concatenates two strings into a newly allocated string |
| ft_strtrim | Removes given characters from the beginning and end of a string |
| ft_split | Splits a string into an array of strings using a delimiter |
| ft_itoa | Converts an integer to a newly allocated string |
| ft_strmapi | Applies a function to each character of a string, returning a new string |
| ft_striteri | Applies a function to each character of a string, modifying it in place |
| ft_putchar_fd | Writes a character to a given file descriptor |
| ft_putstr_fd | Writes a string to a given file descriptor |
| ft_putendl_fd | Writes a string followed by a newline to a given file descriptor |
| ft_putnbr_fd | Writes an integer to a given file descriptor |

### Part 3 — linked lists

| Function | Description |
|---|---|
| ft_lstnew | Creates a new list node |
| ft_lstadd_front | Adds a node at the beginning of a list |
| ft_lstsize | Returns the number of nodes in a list |
| ft_lstlast | Returns the last node of a list |
| ft_lstadd_back | Adds a node at the end of a list |
| ft_lstdelone | Frees a single node and its content |
| ft_lstclear | Frees a list and all its content |
| ft_lstiter | Applies a function to the content of each node of a list |
| ft_lstmap | Creates a new list by applying a function to the content of each node of a lis |
