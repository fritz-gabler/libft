
# libft

A re-implementation of a subset of the C standard library, written as part of the **42 School** curriculum. The project produces a static archive (`libft.a`) that can be linked into future 42 projects.

---

## Table of Contents

- [About](#about)
- [Functions](#functions)
  - [Libc Functions](#libc-functions)
  - [Additional Functions](#additional-functions)
  - [Bonus – Linked List](#bonus--linked-list)
- [Usage](#usage)
- [Makefile Targets](#makefile-targets)

---

## About

`libft` re-implements common C library functions from scratch without calling the originals (except where the specification allows). All source files compile with the flags `-Wall -Wextra -Werror`.

**Author:** fgabler (`fgabler@student.42.fr`)  
**Created:** March 2023

---

## Functions

### Libc Functions

These functions mimic their standard `<string.h>`, `<ctype.h>`, and `<stdlib.h>` counterparts.

| Function | Prototype | Description |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | Returns non-zero if `c` is an alphabetic character. |
| `ft_isdigit` | `int ft_isdigit(int c)` | Returns non-zero if `c` is a decimal digit. |
| `ft_isalnum` | `int ft_isalnum(int c)` | Returns non-zero if `c` is alphanumeric. |
| `ft_isascii` | `int ft_isascii(int c)` | Returns non-zero if `c` is a 7-bit ASCII character. |
| `ft_isprint` | `int ft_isprint(int c)` | Returns non-zero if `c` is a printable character. |
| `ft_toupper` | `int ft_toupper(int c)` | Converts `c` to upper-case. |
| `ft_tolower` | `int ft_tolower(int c)` | Converts `c` to lower-case. |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Returns the length of string `s`. |
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len)` | Fills `len` bytes of `b` with value `c`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Sets `n` bytes of `s` to zero. |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies `n` bytes from `src` to `dst` (no overlap). |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t n)` | Copies `n` bytes from `src` to `dst`, handles overlap. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Locates first occurrence of `c` in the first `n` bytes of `s`. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares first `n` bytes of `s1` and `s2`. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Size-bounded copy of string `src` into `dst`. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)` | Size-bounded concatenation of `src` onto `dst`. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Returns pointer to first occurrence of `c` in `s`. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Returns pointer to last occurrence of `c` in `s`. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares up to `n` characters of `s1` and `s2`. |
| `ft_strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Locates `needle` in `haystack` within `len` bytes. |
| `ft_atoi` | `int ft_atoi(const char *str)` | Converts the string `str` to an integer. |
| `ft_calloc` | `void *ft_calloc(size_t count, size_t size)` | Allocates zero-initialised memory for `count` elements. |
| `ft_strdup` | `char *ft_strdup(const char *s1)` | Returns a newly allocated copy of string `s1`. |

### Additional Functions

Functions not present in libc but useful for everyday string/IO work.

| Function | Prototype | Description |
|---|---|---|
| `ft_substr` | `char *ft_substr(const char *s, unsigned int start, size_t len)` | Returns a newly allocated substring of `s` starting at `start` with max length `len`. |
| `ft_strjoin` | `char *ft_strjoin(const char *s1, const char *s2)` | Returns a newly allocated concatenation of `s1` and `s2`. |
| `ft_strtrim` | `char *ft_strtrim(const char *s1, const char *set)` | Returns a copy of `s1` with leading/trailing characters from `set` removed. |
| `ft_split` | `char **ft_split(const char *s, char c)` | Splits `s` by delimiter `c`; returns a NULL-terminated array of strings. |
| `ft_itoa` | `char *ft_itoa(int n)` | Returns a newly allocated string representation of integer `n`. |
| `ft_strmapi` | `char *ft_strmapi(const char *s, char (*f)(unsigned int, char))` | Applies `f` to each character of `s`; returns the resulting string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character of `s` in place, passing its index. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes character `c` to file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes string `s` to file descriptor `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes string `s` followed by a newline to file descriptor `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes integer `n` to file descriptor `fd`. |

### Bonus – Linked List

Implementation of a singly linked list using the `t_list` structure defined in `libft.h`:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

| Function | Prototype | Description |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Allocates a new list node with the given `content`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Prepends `new` to the list `lst`. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Appends `new` to the end of list `lst`. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Returns the number of nodes in `lst`. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node of `lst`. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees one node using `del` on its content. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees all nodes of `lst` using `del`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to the content of every node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list by applying `f` to each node's content. |

---

## Usage

```bash
# Clone the repository
git clone https://github.com/fritz-gabler/libft.git
cd libft

# Build the library (mandatory part)
make

# Build including bonus linked-list functions
make bonus
```

Then link `libft.a` into your project:

```c
// example.c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello world 42", ' ');
    ft_putstr_fd(words[0], 1); // "hello"
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror example.c -L. -lft -I. -o example
```

---

## Makefile Targets

| Target | Description |
|---|---|
| `make` / `make all` | Compile `libft.a` (mandatory sources only). |
| `make bonus` | Compile `libft.a` including the linked-list bonus functions. |
| `make clean` | Remove compiled object files. |
| `make fclean` | Remove object files **and** `libft.a`. |
| `make re` | Run `fclean` then `all`. |

---

> [!TIP]
> New to Makefiles? Check out [makefiletutorial.com](https://makefiletutorial.com/) for a thorough introduction.
