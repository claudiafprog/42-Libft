*This project has been created as part of the 42 curriculum by clferrei.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.  
The goal of this project is to recreate standard C library functions and implement additional utility functions from scratch.

This project aims to deepen understanding of low-level C programming concepts, including:
- memory management
- pointer manipulation
- string handling
- algorithmic thinking

The library serves as a foundation for future projects in the 42 curriculum.

---

## Library Description

Libft is structured as a collection of independent functions grouped by functionality.  
Each function is implemented from scratch following strict coding standards.

The library includes:

- Character classification functions (e.g. ft_isalpha, ft_isdigit)
- String manipulation functions (e.g. ft_strlen, ft_strdup, ft_split)
- Memory functions (e.g. ft_memset, ft_memcpy, ft_calloc)
- Conversion functions (e.g. ft_atoi, ft_itoa)
- Additional utility functions (including linked list handling if implemented)

Each function is designed to behave similarly to its standard C library counterpart while reinforcing understanding of memory and pointer operations.

---

## Instructions

To compile the library: make

To remove object files: make clean

To remove object files and the library: make fclean

To recompile everything: make re

To use the library in a program: gcc main.c -L. -lft

--- 

## Resources

### References

- man7.org Linux manual pages
- GNU C Library documentation
- "The C Programming Language" by Kernighan & Ritchie
- 42 Intra documentation and project subject PDF

---

### AI Usage

AI was used as a learning support tool during the development of this project.

It was used for:
- understanding edge cases in string manipulation functions (e.g. ft_split)
- debugging pointer and memory allocation issues
- clarifying integer conversion logic in ft_itoa (including INT_MIN handling)
- reviewing algorithm structure and identifying logical mistakes

All code was implemented, tested, and validated manually by the author.

