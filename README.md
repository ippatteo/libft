# libft

## Project Overview
Libft is a custom C library that reimplements various standard C library functions along with additional utility functions. This project serves as a fundamental building block for other 42 school projects.

## Library Contents

### String Functions
- `ft_strlen` - Calculate string length
- `ft_strdup` - Duplicate a string
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character from the end of string
- `ft_strncmp` - Compare two strings
- `ft_strlcat` - Concatenate strings with size limit
- `ft_strlcpy` - Copy string with size limit
- `ft_strnstr` - Locate a substring in a string
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim characters from string
- `ft_split` - Split string into array of substrings
- `ft_substr` - Extract substring from string

### Memory Functions
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero a byte string
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area with overlap handling
- `ft_memchr` - Scan memory for a character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero-initialize memory

### Character Functions
- `ft_isalpha` - Check for alphabetic character
- `ft_isdigit` - Check for digit
- `ft_isalnum` - Check for alphanumeric character
- `ft_isascii` - Check for ASCII character
- `ft_isprint` - Check for printable character
- `ft_toupper` - Convert to uppercase
- `ft_tolower` - Convert to lowercase

### Conversion Functions
- `ft_atoi` - Convert string to integer
- `ft_itoa` - Convert integer to string

### Output Functions
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output number to file descriptor

### List Functions
- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node at beginning
- `ft_lstadd_back` - Add node at end
- `ft_lstsize` - Count list elements
- `ft_lstlast` - Get last node

## How to Use

### Compilation
```bash
make        # Compile the library
make bonus  # Compile with bonus functions (list manipulation)
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile the library
```

### Using in Your Project
1. Include the header in your source files:
```c
#include "libft.h"
```

2. Compile your project with libft:
```bash
gcc your_program.c -L. -lft
```

## Author
Project developed for 42 school.

## Testing
Check `subject and validation/` folder for test requirements and validation tools.