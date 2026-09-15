# libft

**libft** is a personal C library project from 42. The goal is to learn C by reimplementing basic standard library functions and creating small utility functions from scratch.

## Files and functions

### C standard library reimplementations
- `ft_strlen.c` – counts the length of a string.
- `ft_strlcpy.c` – copies a string with a size limit.
- `ft_strlcat.c` – concatenates two strings with a size limit.
- `ft_strncmp.c` – compares two strings up to n characters.
- `ft_strchr.c` – locates a character in a string.
- `ft_strrchr.c` – locates the last occurrence of a character.
- `ft_strnstr.c` – finds a substring in a string (up to n chars).
- `ft_atoi.c` – converts a string to an integer.
- `ft_isalpha.c` – checks if a character is a letter.
- `ft_isdigit.c` – checks if a character is a digit.
- `ft_isalnum.c` – checks if a character is alphanumeric.
- `ft_isascii.c` – checks if a character is ASCII.
- `ft_isprint.c` – checks if a character is printable.
- `ft_toupper.c` – converts a character to uppercase.
- `ft_tolower.c` – converts a character to lowercase.

### Memory and utility functions
- `ft_memset.c` – fills a block of memory with a byte.
- `ft_bzero.c` – sets memory to zero.
- `ft_memcpy.c` – copies memory area.
- `ft_memmove.c` – copies memory safely with overlapping areas.
- `ft_memchr.c` – searches memory for a byte.
- `ft_memcmp.c` – compares two memory areas.
- `ft_calloc.c` – allocates memory and sets it to zero.

### Extra utility functions
- `ft_substr.c` – extracts a substring from a string.
- `ft_strjoin.c` – joins two strings into a new one.
- `ft_strtrim.c` – trims characters from the start and end of a string.
- `ft_split.c` – splits a string into an array of strings by a delimiter.
- `ft_itoa.c` – converts an integer to a string.
- `ft_strmapi.c` – applies a function to each character of a string, creating a new string.
- `ft_striteri.c` – applies a function to each character of a string (in-place).
- `ft_putchar_fd.c` – writes a character to a file descriptor.
- `ft_putstr_fd.c` – writes a string to a file descriptor.
- `ft_putendl_fd.c` – writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd.c` – writes an integer to a file descriptor.

### Bonus: linked list functions
- `ft_lstnew.c` – creates a new list node.
- `ft_lstadd_front.c` – adds a node at the start of the list.
- `ft_lstadd_back.c` – adds a node at the end of the list.
- `ft_lstsize.c` – counts the number of nodes in the list.
- `ft_lstlast.c` – returns the last node of the list.
- `ft_lstdelone.c` – deletes a single node and its content.
- `ft_lstclear.c` – deletes and frees all nodes of the list.
- `ft_lstiter.c` – applies a function to each node's content.
- `ft_lstmap.c` – applies a function to each node's content and builds a new list from the results.

## Build

The project uses CMake and builds an out-of-source static library.

```bash
git clone https://github.com/mikita12/libft.git
cd libft
cmake -S . -B build
cmake --build build
```

This produces `build/liblibft.a`.
