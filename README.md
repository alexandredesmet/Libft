# Libft

*This project has been created as part of the 42 curriculum by adesmet*[cite: 21]

## Description

**Libft** is the very first project at 42[cite: 4]. The goal is to design and build a custom static C library (`libft.a`) from scratch[cite: 11]. This library reimplements a set of standard C library functions (Libc)[cite: 12], along with a collection of useful utility and string-manipulation functions[cite: 14] and a complete linked-list manipulation API[cite: 18]. 

Having this personal library provides a robust, reliable toolkit that can be reused across future C projects in the 42 curriculum[cite: 6].

---

## Library Content Overview

The library is divided into three main sections:

1. **Part 1 - Libc Functions:** Reimplementations of standard C library functions prefixed with `ft_` (e.g., character checks, memory management like `ft_memset` and `ft_calloc`, and string utilities like `ft_strlen`, `ft_strlcpy`, and `ft_strncmp`)[cite: 12].
2. **Part 2 - Additional Functions:** Custom utility functions not found in standard libc, including string slicing (`ft_substr`), joining (`ft_strjoin`), trimming (`ft_strtrim`), splitting (`ft_split`), integer-to-string conversion (`ft_itoa`), string mapping/iteration (`ft_strmapi`, `ft_striteri`), and file descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`)[cite: 14, 15, 16, 17].
3. **Part 3 - Linked List Functions:** Functions designed to allocate, manipulate, iterate, and clear singly linked lists using the `t_list` structure (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`)[cite: 18, 19, 20].

---

## Instructions

### Compilation

To compile the library and generate the `libft.a` static archive, run:

```bash
make