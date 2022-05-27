/***************************************************************************/
/*                                                                         */
/*                               To use main:                              */
/*   make && gcc main.c libft.a && ./a.out && make fclean && rm -r a.out  */
/*                                                                         */
/***************************************************************************/

#include <stdio.h>
#include "libft.h"

int main(void)
{
    int     a;
    int     b;
	int     *ptr_a;
    int     *ptr_b;
    char    *str;

    ptr_a = &a;
    ptr_b = &b;

    *ptr_a = 1;
    *ptr_a = 2;

    // str = "!Good mornnig! This is my main! Hope you enjoy it!";

	printf("-------------------------------------------------------------\n");
	printf("------------------------ Test ft_swap ----------------------\n");
	printf("-------------------------------------------------------------\n");
	printf("antes: a = %i, b = %i\n", *ptr_a, *ptr_b);
    ft_swap(ptr_a,ptr_b);
	printf("depois: a = %i, b = %i\n", *ptr_a, *ptr_b);
	printf("\n");

	printf("-------------------------------------------------------------\n");
	printf("---------------- Test ft_count_digit(12345) ----------------\n");
	printf("-------------------------------------------------------------\n");
	printf("Dígitos: %zu\n", ft_count_digit(12345));
	printf("\n");

	printf("-------------------------------------------------------------\n");
	printf("---------------------- Test ft_strlowcase -------------------\n");
	printf("-------------------------------------------------------------\n");
    str = "!Good mornnig! This is my main! Hope you enjoy it!";
    printf("Antes: %s\n", str);
    printf("Depois: %s\n", ft_strlowcase(str));
	printf("\n");

    return (0);
}