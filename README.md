*This project has been created as part of the 42 curriculum by brouane.*

# Libft

## Description

Libft is a C project whose goal is to create a personal static library named
`libft.a`. It reimplements useful functions from the C standard library and adds
string, output, memory-allocation, and singly linked-list utilities.

This repository follows the Libft subject **version 19.2**. In this version, the
linked-list functions are part of the mandatory project and are compiled by the
normal `make` command.

## Instructions

Compile the library from the repository root:

```bash
make
```

This creates `libft.a` with the flags `-Wall -Wextra -Werror`.

Available rules:

```bash
make        # Compile libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild the library from scratch
```

Use the library in another C program:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

## Library description

### Part 1 — Libc functions

Character classification and conversion:
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
`ft_toupper`, and `ft_tolower`.

String and memory functions:
`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`,
`ft_memchr`, `ft_memcmp`, `ft_strnstr`, and `ft_atoi`.

Allocation functions:
`ft_calloc` and `ft_strdup`.

### Part 2 — Additional functions

String creation and transformation:
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
`ft_strmapi`, and `ft_striteri`.

File-descriptor output:
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`.

### Part 3 — Linked lists

The library defines the following node type:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

It provides:
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and
`ft_lstmap`.

## Important behavior

The five character-classification functions return exactly `1` when the tested
condition is true and `0` otherwise, as required by subject version 19.2.

`ft_calloc` returns a pointer that can be passed to `free` when either argument
is zero and rejects multiplication overflow.

`ft_split` allocates every returned string independently, allocates the pointer
array dynamically, frees partial allocations on failure, and terminates the
array with `NULL`.

## Resources

Classic references used for the project:

- The Libft version 19.2 subject provided by 42.
- The C manual pages for the original libc functions (`man 3`).
- The C language documentation for pointers, memory allocation, and structures.
- Peer discussions and local test programs for edge cases and memory handling.

### Use of AI

AI was used as a learning and review tool to compare subject versions 18 and
19.2, identify changed requirements, review edge cases, and improve this
README. The implementation must still be understood, tested, and explainable by
the author during peer evaluation.
