# libft

**libft** is a personal C library project from 42. The goal is to learn C by reimplementing basic standard library functions and creating small utility functions from scratch.

## Files and functions

### C standard library reimplementations
- `ft_strlen.c` – counts the length of a string.  
- `ft_strcpy.c` – copies a string from source to destination.  
- `ft_strdup.c` – duplicates a string by allocating new memory.  
- `ft_strcat.c` – concatenates two strings.  
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

## Build

```bash
git clone https://github.com/mikita12/libft.git
cd libft
make
