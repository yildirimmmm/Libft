
# Libft

Libft is a foundational C library recreated as part of the 42 Türkiye curriculum.  
It consists of standard C functions implemented from scratch, designed to reinforce core concepts in C programming such as memory management, string handling, and data conversions.

##  Project Overview

- Reimplementation of essential C standard library functions
- Custom utility functions to support future C projects
- Strict adherence to the 42 coding standard (Norm)

##  File Structure

```
.
├── ft_*.c           # Individual C source files for each function
├── libft.h          # Header file with all function declarations
├── Makefile         # Makefile to compile the static library
└── README.md        # Project documentation (this file)
```

##  Implemented Functions

### Part 1 – libc Functions

| Category          | Functions |
|------------------|-----------|
| Memory           | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| String           | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Character Checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| Others           | `ft_atoi`, `ft_calloc` |

### Part 2 – Additional Functions

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`, `ft_striteri`
- Output functions: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Usage

### Compile the library
```bash
make
```

### Clean object files
```bash
make clean
```

### Remove everything (objects + library)
```bash
make fclean
```

### Recompile from scratch
```bash
make re
```

##  Notes

- All code is written in **C** and follows the **42 Norm** strictly.
- The library compiles into `libft.a`, a static archive file you can reuse in future projects.
- No bonus part is included in this version.

##  Author

- **yildirimmmm**  
  [[Github](https://github.com/yildirimmmm)]
