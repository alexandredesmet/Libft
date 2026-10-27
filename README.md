# Libft

*This project has been created as part of the 42 curriculum by adesmet*

## Description

**Libft** is the very first project at 42. The goal is to design and build a custom static C library (`libft.a`) from scratch.
This library reimplements some standard C library functions, string manipulation functions and linked list manipulation functions. 

### Function List

* **Character Checks:**
  * `ft_isalpha` — Checks for an alphabetic character.
  * `ft_isdigit` — Checks for a digit (`0` through `9`).
  * `ft_isalnum` — Checks for an alphanumeric character.
  * `ft_isascii` — Checks whether a character fits into the ASCII character set.
  * `ft_isprint` — Checks for any printable character.

* **String & Memory Length / Manipulation:**
  * `ft_strlen` — Calculates the length of a string.
  * `ft_memset` — Fills memory with a constant byte.
  * `ft_bzero` — Writes zeros to a byte string.
  * `ft_memcpy` — Copies memory area.
  * `ft_memmove` — Copies memory area safely (handles overlapping memory).
  * `ft_strlcpy` — Size-bounded string copying.
  * `ft_strlcat` — Size-bounded string concatenation.
  * `ft_toupper` — Converts a character to uppercase.
  * `ft_tolower` — Converts a character to lowercase.

* **Searching & Comparison:**
  * `ft_strchr` — Locates a character in a string (first occurrence).
  * `ft_strrchr` — Locates a character in a string (last occurrence).
  * `ft_strncmp` — Compares two strings up to `n` bytes.
  * `ft_memchr` — Scans memory for a byte value.
  * `ft_memcmp` — Compares memory areas.
  * `ft_strnstr` — Locates a substring in a string up to `n` bytes.

* **Conversions & Allocation:**
  * `ft_atoi` — Converts a string to an integer.
  * `ft_calloc` — Allocates memory and initializes it to zero.
  * `ft_strdup` — Creates a duplicate of a string using dynamic memory allocation.

* **String Manipulation:**
  * `ft_substr` — Extracts a substring from a string.
  * `ft_strjoin` — Concatenates two strings into a new dynamically allocated string.
  * `ft_strtrim` — Trims specified leading and trailing characters from a string.
  * `ft_split` — Splits a string using a delimiter character into an array of strings.
  * `ft_itoa` — Converts an integer to a string.
  * `ft_strmapi` — Applies a function to each character of a string to create a new string.
  * `ft_striteri` — Applies a function to each character of a string in-place (passing index).

* **File Descriptor Output:**
  * `ft_putchar_fd` — Outputs a character to a given file descriptor.
  * `ft_putstr_fd` — Outputs a string to a given file descriptor.
  * `ft_putendl_fd` — Outputs a string followed by a newline to a given file descriptor.
  * `ft_putnbr_fd` — Outputs an integer to a given file descriptor.

* **Linked lists:**
  * `ft_lstnew` — Allocates and returns a new list node.
  * `ft_lstadd_front` — Adds a node at the beginning of a list.
  * `ft_lstsize` — Counts the number of nodes in a list.
  * `ft_lstlast` — Returns the last node of a list.
  * `ft_lstadd_back` — Adds a node at the end of a list.
  * `ft_lstdelone` — Frees a single node's memory using a given deletion function.
  * `ft_lstclear` — Frees and deletes a node and all consecutive nodes after it.
  * `ft_lstiter` — Iterates through a list and applies a function to each node's content.
  * `ft_lstmap` — Iterates through a list, applies a function to content, and creates a new resulting list.

---

## Instructions

### Compilation

To compile the library and generate the `libft.a` static archive, run:

```bash
make
```

### Makefile Rules

| Command | Description |
| :--- | :--- |
| `make` / `make all` | Compiles source files and creates `libft.a`. |
| `make clean` | Removes object (`.o`) files. |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Rebuilds the whole library from scratch. |

## Resources

* **Documentation & Manuals:** 
  * Unix `man` pages for standard behavior definitions.
  * Gemini AI
* **Testing & Validation:** 
  * Mains are left in comment beneath each function to test them individually.   
  * Peer-created test suites (such as `francinette`, `libft-unit-test` or `libftTester`) used during development to verify edge cases.
* **AI Usage Disclosure:** 
  * AI was used to assist in structuring documentation, outlining edge cases for complex parsing functions, searching information quicker and verifying Makefile best practices.
  * AI was not used to generate or copy direct implementations of the functions. All core logic, debugging, and structural decisions were carried out independently.