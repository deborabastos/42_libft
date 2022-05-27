# Libft

This is my first project as a Cadet in [42 School São Paulo](https://www.42sp.org.br/).

The goal of this project is to build my own C library. In order to accomplish it,  I'll re-code some of the most important functions available on C Standard library among other useful functions suggested by 42 staff. As course goes, new functions will be added to fullfill the needs of my following projects.

## Is functions
| Function | Description |
|---|---|
|[**ft_isalnum**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isalnum.c)| checks if a given character is alphabetical or numerical |
|[**ft_isalpha**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isalpha.c)| checks if a given character is alphabetic |
|[**ft_isascii**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isascii.c)| checks if a given character is a ASCII |
|[**ft_isblank**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isblank.c)| checks for a blank character; that is, a space or a tab |
|[**ft_iscntrl**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_iscntrl.c)| checks if a given character is NOT printable according to ASCII table |
|[**ft_isdigit**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isdigit.c)| checks if a given character corresponds to a decimal digit character (48 to 57 at ASCII) |
|[**ft_isgraph**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isgraph.c)| checks for any printable character except space |
|[**ft_islower**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_islower.c)| checks if a given character is a lower-case letter |
|[**ft_isnegative**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isnegative.c)| checks if a number is negative |
|[**ft_isprime**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isprime.c)| returns 1 if a number is prime and 0 if is not |
|[**ft_isprint**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isprint.c)| tests if a character c is printable according to ASCII table, including space |
|[**ft_ispunct**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_ispunct.c)| checks for any printable character which is not a space or an alphanumeric character |
|[**ft_isspace**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isspace.c)|  tests for white-space characters. That is: form-feed ('\f'), newline ('\n'), carriage return ('\r'), horizontal tab ('\t'), and vertical tab ('\v') |
|[**ft_isupper**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isupper.c)|  tests if a given character is a upper-case letter |
|[**ft_isxdigit**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_isxdigit.c)| checks for a hexadecimal digits, that is, one of 0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F |

## String functions
| Function | Description |
|---|---|
|[**ft_split**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_split.c)| splits a string using a given character as delimiter |
|[**ft_strcapitalize**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strcapitalize.c)| capitalizes the first letter of each word and transforms all other letters to lowercase |
|[**ft_strupcase**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strupcase.c)| converts a string to uppercase |
|[**ft_strlowcase**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strlowcase.c)| converts a string to lowercase |
|[**ft_strcat**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strcat.c)| appends one string to another |
|[**ft_strchr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strchr.c)| finds the first occurrence of a given character in the string |
|[**ft_strcmp**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strcmp.c)| compares two strings |
|[**ft_strcpy**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strcpy.c)| copies one string to another |
|[**ft_strdup**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strdup.c)| duplicates a string |
|[**ft_strjoin**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strjoin.c)| concatenates two strings and returns a new one |
|[**ft_strlcat**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strlcat.c)| appends one string to another limited to a given lenght. It returns the combined length of both |
|[**ft_strlcpy**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strlcpy.c)| copies one string to another limited to a given lenght |
|[**ft_strlen**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strlen.c)| returns the length of the string |
|[**ft_strmapi**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strmapi.c)| applies the function ’f’ to each character of the string |
|[**ft_strncat**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strncat.c)| appends most of n bytes from src string to another |
|[**ft_strncmp**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strncmp.c)| compares the first n bytes of two strings |
|[**ft_strncpy**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strncpy.c)| copies n bytes of a string to another |
|[**ft_strnstr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strnstr.c)| locates a substring in a string limited to n bytes |
|[**ft_strrchr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strrchr.c)| returns a pointer to the last occurrence of a character in a string |
|[**ft_strrev**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strrev.c)| reverses a string |
|[**ft_strstr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strstr.c)| locates a substring in a string |
|[**ft_strtrim**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_strtrim.c)| trim beginning and end of string with the specified characters |
|[**ft_substr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_substr.c)| gets a substring from a string |
|[**ft_count_words**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_count_words.c)| counts how many words has a string |
|[**ft_gnl**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_gnl.c)| reads every line of a file |

## Put functions
| Function | Description |
|---|---|
|[**ft_putchar_fd**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putchar_fd.c)| outputs a character to the given file descriptor |
|[**ft_putchar**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putchar.c)| writes a character to the standard output |
|[**ft_putendl_fd**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putendl_fd.c)| outputs a string to a given file descriptor, followed by a newline |
|[**ft_putendl**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putendl.c)| outputs a string to the standard output, followed by a newline |
|[**ft_putlnbr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putlnbr.c)| outputs a unsigned integer to the standard output |
|[**ft_putnbr_fd**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putnbr_fd.c)| outputs a integer to a given file descriptor |
|[**ft_putnbr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putnbr.c)| outputs a integer to the standard output |
|[**ft_putnstr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putnstr.c)| outputs a string to the standard output limited to n chars |
|[**ft_putstr_fd**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putstr_fd.c)| outputs a string to a given file descriptor |
|[**ft_putstr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_putstr.c)| outputs a string to the standard output |

## Memory functions
| Function | Description |
|---|---|
|[**ft_bzero**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_bzero.c)| writes n zeroed bytes to the string s |
|[**ft_calloc**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_calloc.c)| allocates the requested memory and returns a pointer to it |
|[**ft_memccpy**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_memccpy.c)| copies no more than n bytes from memory area src to memory area dst, stopping when the character c is found |
|[**ft_memchr**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_memchr.c)| scans the initial n bytes of the memory area pointed to by s for the first instance of c |
|[**ft_memcmp**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_memcmp.c)| compares the first n bytes of the memory areas s1 and s2. It returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2 |
|[**ft_memcpy**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_memcpy.c)| copies n bytes from memory area src to memory area dst |
|[**ft_memmove**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_memmove.c)| copies len bytes from memory area src to memory area dst. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dst, and the bytes are then copied from the temporary array to dst |
|[**ft_memset**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_memset.c)| fills the first len bytes of the memory area pointed to by b with the constant byte c |

## To functions
| Function | Description |
|---|---|
|[**ft_atoi**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_atoi.c)| converts the initial portion of the string pointed to by str into integer |
|[**ft_itoa**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_itoa.c)| receives an integer and returns a string representing the integer received as an argument |
|[**ft_utoa_base**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_utoa_base.c)| converts base of a unisgned integer |
|[**ft_tolower**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_tolower.c)| converts uppercase letters to lowercase |
|[**ft_toupper**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_toupper.c)|  converts lowercase letters to uppercase |

## Digit functions
| Function | Description |
|---|---|
|[**ft_div_mod**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_div_mod.c)| divides parameters a by b and stores the result in the int pointed by div. It also stores the remainder of the division of a by b in the int pointed by mod |
|[**ft_ultimate_div_mod**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_ultimate_div_mod.c)| divides parameters a by b. The result of this division is stored in the int pointed by a. The remainder of the division is stored in the int pointed by b |
|[**ft_count_digit**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_count_digit.c)| counts how many digits the integer has |
|[**ft_swap**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_swap.c)|  swaps the value of two integers |

## Math functions
| Function | Description |
|---|---|
|[**ft_pow**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_pow.c)| returns the value of a power applied to a number |
|[**ft_sqrt**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_sqrt.c)|  computes the square root of a number |
|[**ft_factorial**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_factorial.c)| returns the result of a factorial operation based on the number given as a parameter |
|[**ft_fibonacci**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_fibonacci.c)| returns the n-th element of the Fibonacci sequence, the first element being at the 0 index |

## Linked List functions
| Function | Description |
|---|---|
|[**ft_lstadd_back**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstadd_back.c)| adds an element at the end a linked list |
|[**ft_lstadd_front**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstadd_front.c)| adds an element at the beginning of a linked list |
|[**ft_lstclear**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstclear.c)| deletes and frees the given element and every successor of that element |
|[**ft_lstdelone**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstdelone.c)| takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element |
|[**ft_lstiter**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstiter.c)| iterates a linked list and applies the function ’f’ to the content of each element |
|[**ft_lstlast**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstlast.c)|  returns the last element of the linked list |
|[**ft_lstmap**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstmap.c)| iterates the linked list and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’ |
|[**ft_lstnew**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstnew.c)| creates a new linked list with the given element |
|[**ft_lstsize**](https://github.com/deborabastos/42_libft/blob/master/libft_current/ft_lstsize.c)| counts the number of elements in a linked list |

## Makefile

| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make clean` | removes the .o files used to create the library |
| `make fclean` | removes the .o & .a files used to create the library |
| `make re` | removes all .o & .a files then remakes them |