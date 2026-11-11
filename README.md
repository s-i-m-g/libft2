*This activity has been created as part of the 42 curriculum by sganase.*

## Description

`libft` is a static C library reimplementing a set of standard C library functions, along with some additional utility functions. The goal is to create a personal toolbox of reliable, reusable functions used throughout the rest of the 42 curriculum.

The library covers:
- **Libc functions** — reimplementations of `<ctype.h>`, `<string.h>` and `<stdlib.h>` functions (e.g. `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_calloc`).
- **Additional functions** — handy string/output helpers not in the standard library (e.g. `ft_substr`, `ft_strjoin`, `ft_split`, `ft_strtrim`, `ft_itoa`, `ft_putstr_fd`).
- **Linked list functions** — a `t_list` type and operations to create and manipulate linked lists (e.g. `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, `ft_lstclear`).

See `libft.h` for the full list of prototypes.

## Instructions

Compile the library with `make`, which produces `libft.a`:

```sh
make        # build libft.a
make clean  # remove object files
make fclean # remove object files and libft.a
make re     # rebuild from scratch
```

Use it in your own program by including the header and linking the archive:

```c
#include "libft.h"
```

```sh
gcc main.c -L. -lft -o my_program
```

## Resources

- [cppreference](https://en.cppreference.com/w/c) and the Linux man pages (`man 3 <function>`) for the behaviour of the original functions.
- The 42 `libft` subject.
