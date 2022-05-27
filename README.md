# Libft

This is my first project as a Cadet in [42 School São Paulo](https://www.42sp.org.br/).

The goal of this project is to build my own C library. In order to accomplish it,  I'll re-code some of the most important functions available on C Standard library among other useful functions suggested by 42 staff. As course goes, new functions will be added to fullfill the needs of my following projects.

## Is Functions

| Function | Description |
|---|---|
|**ft_isalnum**| checks if a given character is alphabetical or numerical |
|**ft_isalpha**| checks if a given character is alphabetic |
|**ft_isascii**| checks if a given character is a ASCII |
|**ft_isblank**| checks for a blank character; that is, a space or a tab |
|**ft_iscntrl**| checks if a given character is NOT printable according to ASCII table |
|**ft_isdigit**| checks if a given character corresponds to a decimal digit character (48 to 57 at ASCII) |
|**ft_isgraph**| checks for any printable character except space |
|**ft_islower**| checks if a given character is a lower-case letter |
|**ft_isnegative**| checks if a number is negative |
|**ft_isprime**| returns 1 if a number is prime and 0 if is not |
|**ft_isprint**| tests if a character c is printable according to ASCII table, including space |
|**ft_ispunct**| checks for any printable character which is not a space or an alphanumeric character |
|**ft_isspace**|  tests for white-space characters. That is: form-feed ('\f'), newline ('\n'), carriage return ('\r'), horizontal tab ('\t'), and vertical tab ('\v') |
|**ft_isupper**|  tests if a given character is a upper-case letter |
|**ft_isxdigit**| checks for a hexadecimal digits, that is, one of 0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F |


## To Functions
| Function | Description |
|---|---|
|**ft_atoi**| converts the initial portion of the string pointed to by str into integer |
|**ft_itoa**| receives an integer and returns a string representing the integer received as an argument |


## Memory functions
| Function | Description |
|---|---|
|**ft_bzero**| writes n zeroed bytes to the string s |
|**ft_calloc**| allocates the requested memory and returns a pointer to it |
|**ft_memccpy**| copies no more than n bytes from memory area src to memory area dst, stopping when the character c is found |
|**ft_memchr**| scans the initial n bytes of the memory area pointed to by s for the first instance of c |
|**ft_memcmp**| compares the first n bytes of the memory areas s1 and s2. It returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2 |
|**ft_memcpy**| copies n bytes from memory area src to memory area dst |
|**ft_memmove**| copies len bytes from memory area src to memory area dst. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dst, and the bytes are then copied from the temporary array to dst |
|**ft_memset**| fills the first len bytes of the memory area pointed to by b with the constant byte c |


## Math functions
| Function | Description |
|---|---|
|**ft_pow**| returns the value of a power applied to a number |
|**ft_sqrt**|  computes the square root of a number |
|**ft_factorial**| returns the result of a factorial operation based on the number given as a parameter |
|**ft_fibonacci**| returns the n-th element of the Fibonacci sequence, the first element being at the 0 index |



## Digit Functions
| Function | Description |
|---|---|
|**ft_div_mod**| divides parameters a by b and stores the result in the int pointed by div. It also stores the remainder of the division of a by b in the int pointed by mod |
|**ft_count_digit**| counts how many digits the integer has |


## String Functions
| Function | Description |
|---|---|
|**ft_split**| splits a string using a given character as delimiter |
|**ft_strcapitalize**| capitalizes the first letter of each word and transforms all other letters to lowercase |
|**ft_strcat**| appends one string to another |
|**ft_strchr**| finds the first occurrence of a given character in the string |
|**ft_strcmp**| compares two strings |
|**ft_strcpy**| copies one string to another |
|**ft_strdup**| duplicates a string |
|**ft_strjoin**| concatenates two strings and returns a new one |
|**ft_strlcat**| appends one string to another limited to a given lenght. It returns the combined length of both |
|**ft_strlcpy**| copies one string to another limited to a given lenght |
|**ft_strlen**| returns the length of the string |
|**ft_strlowcase**| converts a string to lowercase |
|**ft_strmapi**| applies the function ’f’ to each character of the string |
|**ft_strncat**| appends most of n bytes from src string to another |
|**ft_strncmp**| compares the first n bytes of two strings |
|**ft_strncpy**| copies n bytes of a string to another |
|**ft_strnstr**|  |

|**ft_count_words**| counts how many words has a string |
|**ft_gnl**| reads every line of a file |



## Put Functions
| Function | Description |
|---|---|
|**ft_putchar_fd**| outputs a character to the given file descriptor |
|**ft_putchar**| writes a character to the standard output |
|**ft_putendl_fd**| outputs a string to a given file descriptor, followed by a newline |
|**ft_putendl**| outputs a string to the standard output, followed by a newline |
|**ft_putlnbr**| outputs a unsigned integer to the standard output |
|**ft_putnbr_fd**| outputs a integer to a given file descriptor |
|**ft_putnbr**| outputs a integer to the standard output |
|**ft_putnstr**| outputs a string to the standard output limited to n chars |
|**ft_putstr_fd**| outputs a string to a given file descriptor |
|**ft_putstr**| outputs a string to the standard output |


## Linked List functions
| Function | Description |
|---|---|
|**ft_lstadd_back**| adds an element at the end a linked list |
|**ft_lstadd_front**| adds an element at the beginning of a linked list |
|**ft_lstclear**| deletes and frees the given element and every successor of that element |
|**ft_lstdelone**| takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element |
|**ft_lstiter**| iterates a linked list and applies the function ’f’ to the content of each element |
|**ft_lstlast**|  returns the last element of the linked list |
|**ft_lstmap**| iterates the linked list and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’ |
|**ft_lstnew**| creates a new linked list with the given element |
|**ft_lstsize**| counts the number of elements in a linked list |



...TO BE CONTINUED...


## Makefile

| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make clean` | removes the .o files used to create the library |
| `make fclean` | removes the .o & .a files used to create the library |
| `make re` | removes all .o & .a files then remakes them |