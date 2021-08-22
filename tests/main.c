/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:56:41 by dalves-p          #+#    #+#             */
/*   Updated: 2021/07/02 17:58:50 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	printf("================================================================================================\n");
	printf("================================== Part 1 - Libc functions =====================================\n");
	printf("================================================================================================\n");
	// ####################################################################################################
	printf("*** ft_memset ***\n");
	int	i;
	char v[5] = {'1', '2', '3', '4', '5'};

	i = 0;
	while (i < 5)
	{
		printf("%d, ", v[i]);
		i++;
	}
	printf("\n");
	ft_memset(v, 1, 1);
	i = 0;
	while (i < 5)
	{
		printf("%d, ", v[i]);
		i++;
	}
	printf("\n");
	ft_memset(v, 0, 3);
	i = 0;
	while (i < 5)
	{
		printf("%d, ", v[i]);
		i++;
	}
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_bzero ***\n");
	printf("\n");
	char v2[5] = {1, 'b', 'c', 'd', 'e'};
	i = 0;
	while (i < 5)
	{
		printf("%d, ", v2[i]);
		i++;
	}
	printf("\n");
	ft_bzero(v2, sizeof(v2));
	i = 0;
	while (i < 5)
	{
		printf("%d, ", v2[i]);
		i++;
	}
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_memcpy ***\n");
	char v3[4] = {'a', 'b', 'c', 'd'};
	char v4[4] = {1, 1, 1, 1};
	i = 0;
	printf("dst original: ");
	while (i < 4)
	{
		printf("%d, ", v3[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("src original: ");
	while (i < 4)
	{
		printf("%d, ", v4[i]);
		i++;
	}
	printf("\n");
	
	ft_memcpy(v3, v4, 4);
	i = 0;
	printf("dst após memcpy: ");
	while (i < 4)
	{
		printf("%d, ", v3[i]);
		i++;
	}
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_memccpy ***\n");
	// Não consegui simular!!!!
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	// printf("*** ft_memmove ***\n");

	// char	src[] = "lorem ipsum dolor sit amet";
	// char	*dest1;
	// dest1 = src + 1; // quando o dst é maior tem overlap!
	// printf("%s\n", ft_memmove(dest1, "consectetur", 5)); 
	// printf("%s\n", ft_memmove(dest1, src, 8));
	// printf("%s\n", ft_memmove(src, dest1, 8));
	// printf("%s\n", ft_memmove(src, dest1, 0));
	// printf("%s\n", ft_memmove(dest1, "con\0sec\0\0te\0tur", 10)); 
	// printf("\n");
	// printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_memchr ***\n");
	// printf("%s\n", ft_memchr("bonjour", 'b', 4));
	// printf("%s\n", ft_memchr("bonjour", 'j', 4));
	// printf("%s\n", ft_memchr("bonjour", 's', 4));
	// printf("%s\n", ft_memchr("bonjour", '0', 4));
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_memcmp ***\n");
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_strlen ***\n");
	char	*str = "École 42 - Hello World!!";

	printf("ft_strlen: %zu\n", ft_strlen(str));
	printf("strlen: %lu\n", strlen(str));
	if (ft_strlen(str) == strlen(str))
		printf("TEST OK\n");
	else
		printf("TEST FAIL\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_strlcpy ***\n");
	char dest[100];
	unsigned int c;
	c = ft_strlcpy(dest, "Bom dia, Campers!!!!! Bora Codar!!!!", 10);
	printf("src: %s \ndest(10): %s\nReturn: %i\n", "Bom dia, Campers!!!!! Bora Codar!!!!", dest, c);

	c = ft_strlcpy(dest, "Bom dia, Campers!!!!! Bora Codar!!!!", 20);
	printf("src: %s \ndest(20): %s\nReturn: %d\n", "Bom dia, Campers!!!!! Bora Codar!!!!", dest, c);

	c = ft_strlcpy(dest, "Bom dia, Campers!!!!! Bora Codar!!!!", 50);
	printf("src: %s \ndest(50): %s\nReturn: %d\n", "Bom dia, Campers!!!!! Bora Codar!!!!", dest, c);

	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_strlcat ***\n");
	int	s;
	int	r;

	s = -1;
	while (++s <= 13)
	{
		char	src[5] = "casa";
		char	dst1[20] = "amor";
		if (s < 1)
		{
			printf("src: %s | dst1: %s\n", src, dst1);
			printf("r = ft_strlcat(dst1, src, size)\n");
		}
		r = ft_strlcat(dst1, src, s);
		printf("size: %d | src: %s | dst1: %s | return: %d\n", s, src, dst1, r);
	}

	char *destx;
	char * src1 = "lorem ipsum dolor sit amet";
	
	destx = malloc(15 * 1);
	memset(destx, 'r', 15);
	r = ft_strlcat(destx, src1, 5);
	printf("size: %d | src1: %s | dst1: %s | return: %d\n", s, src1, destx, r);
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_strchr ***\n");
	printf("Search for a. Return: %s\n", ft_strchr("casa rosa", 'a'));
	printf("Search for s. Return: %s\n", ft_strchr("casa rosa", 's'));
	printf("Search for j. Return: %s\n", ft_strchr("casa rosa", 'j'));
	printf("Search for a in empty. Return: %s\n", ft_strchr(" ", 'a'));
	printf("Search for 0 em 0. Return: %s\n", ft_strchr("\0", '\0'));
	printf("Return: %s\n", ft_strchr("tripouille", 't' + 256));
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_strrchr ***\n");
	printf("Search for a. Return: %s\n", ft_strrchr("casa rosa", 'a'));
	printf("Search for s. Return: %s\n", ft_strrchr("casa rosa", 's'));
	printf("Search for j. Return: %s\n", ft_strrchr("casa rosa", 'j'));
	printf("Search for a in empty. Return: %s\n", ft_strrchr(" ", 'a'));
	printf("Search for 0 em 0. Return: %s\n", ft_strrchr("\0", '\0'));
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_strnstr ***\n");
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dol", 15));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit ipsum amet", "ipsum", 30));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 15));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 5));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_strncmp ***\n");
	printf("%d\n", strncmp("abc", "ABC", 1));
	printf("%d\n", ft_strncmp("abc", "ABC", 1));
	printf("-----\n");
	printf("%d\n", strncmp("abc", "aBc", 1));
	printf("%d\n", ft_strncmp("abc", "aBc", 1));
	printf("-----\n");
	printf("%d\n", strncmp("abc", "aBc", 2));
	printf("%d\n", ft_strncmp("abc", "aBc", 2));
	printf("-----\n");
	printf("%d\n", strncmp("abc", "abC", 3));
	printf("%d\n", ft_strncmp("abc", "abC", 3));
	printf("-----\n");
	printf("%d\n", strncmp("ABC", "abc", 1));
	printf("%d\n", ft_strncmp("ABC", "abc", 1));
	printf("-----\n");
	printf("%d\n", strncmp("aABC", "abc", 1));
	printf("%d\n", ft_strncmp("aABC", "abc", 1));
	printf("-----\n");
	printf("%d\n", strncmp("#ABC", "a", 1));
	printf("%d\n", ft_strncmp("#ABC", "a", 1));
	printf("-----\n");
	printf("%d\n", strncmp("#ABC", "", 1));
	printf("%d\n", ft_strncmp("#ABC", "", 1));
	printf("-----\n");
	printf("%d\n", strncmp("", "a", 1));
	printf("%d\n", ft_strncmp("", "a", 1));
	printf("-----\n");
	printf("%d\n", strncmp("", "", 1));
	printf("%d\n", ft_strncmp("", "", 1));
	printf("-----\n");
	printf("%d\n", strncmp("test\200", "test\0", 6));
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_atoi ***\n");
	printf("%d\n", ft_atoi("000047"));
	printf("%d\n", ft_atoi("	 47"));
	printf("%d\n", ft_atoi("-47"));
	printf("%d\n", ft_atoi("--47"));
	printf("%d\n", ft_atoi("+47"));
	printf("%d\n", ft_atoi("+-47"));
	printf("%d\n", ft_atoi("+47"));
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_isalpha ***\n");
	
	printf("Esperado: 1 | Resultado: %i", ft_isalpha('A'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalpha('Z'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalpha('a'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalpha('z'));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalpha('0'));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalpha(0));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalpha('1'));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalpha(45));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalpha(9));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalpha('~'));
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_isdigit ***\n");
	printf("Esperado: 1 | Resultado: %i", ft_isdigit('9'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isdigit('0'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isdigit('1'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isdigit(49));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isdigit('A'));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isdigit('Z'));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isdigit('a'));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isdigit(41));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isdigit(0));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isdigit('~'));
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_isalnum ***\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalnum('9'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalnum('0'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalnum('1'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalnum(49));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalnum('A'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalnum('z'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isalnum('a'));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalnum(41));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalnum(0));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isalnum('~'));
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_isascii ***\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii('~'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii(' '));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii('1'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii(49));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii('A'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii('z'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii('a'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isascii(126));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isascii(128));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isascii(300));
	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_isprint ***\n");
	printf("Esperado: 1 | Resultado: %i", ft_isprint('A'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isprint('#'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isprint('a'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isprint('~'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isprint('0'));
	printf("\n");
	printf("Esperado: 1 | Resultado: %i", ft_isprint(' '));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isprint(0));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isprint(31));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isprint(127));
	printf("\n");
	printf("Esperado: 0 | Resultado: %i", ft_isprint('\a'));
	printf("\n");	
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_toupper ***\n");

	printf("Esperado: 65, resultado: %i", ft_toupper('A'));
	printf("\n");
	printf("Esperado: 90, resultado: %i", ft_toupper('Z'));
	printf("\n");
	printf("Esperado: 65, resultado: %i", ft_toupper('a'));
	printf("\n");
	printf("Esperado: 90, resultado: %i", ft_toupper('z'));
	printf("\n");
	printf("Esperado: 48, resultado: %i", ft_toupper('0'));
	printf("\n");
	printf("Esperado: 0, resultado: %i", ft_toupper(0));
	printf("\n");
	printf("Esperado: 49, resultado: %i", ft_toupper('1'));
	printf("\n");
	printf("Esperado: 45, resultado: %i", ft_toupper(45));
	printf("\n");
	printf("Esperado: 9, resultado: %i", ft_toupper(9));
	printf("\n");
	printf("Esperado: 126, resultado: %i", ft_toupper('~'));

	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_tolower ***\n");
	printf("Esperado: 97, resultado: %i", ft_tolower('A'));
	printf("\n");
	printf("Esperado: 122, resultado: %i", ft_tolower('Z'));
	printf("\n");
	printf("Esperado: 97, resultado: %i", ft_tolower('a'));
	printf("\n");
	printf("Esperado: 122, resultado: %i", ft_tolower('z'));
	printf("\n");
	printf("Esperado: 48, resultado: %i", ft_tolower('0'));
	printf("\n");
	printf("Esperado: 0, resultado: %i", ft_tolower(0));
	printf("\n");
	printf("Esperado: 49, resultado: %i", ft_tolower('1'));
	printf("\n");
	printf("Esperado: 45, resultado: %i", ft_tolower(45));
	printf("\n");
	printf("Esperado: 9, resultado: %i", ft_tolower(9));
	printf("\n");
	printf("Esperado: 126, resultado: %i", ft_tolower('~'));

	printf("\n");
	printf("================================================================================================\n");
	// // ####################################################################################################
	// // ####################################################################################################
	printf("*** ft_calloc ***\n");
	
	ft_calloc(5, sizeof(int));
	
	printf("\n");
	printf("================================================================================================\n");
	// ####################################################################################################
	// ####################################################################################################
	printf("*** ft_strdup ***\n");
	printf("%s\n", ft_strdup("debora"));
	printf("%s\n", ft_strdup(" "));
	printf("%s\n", ft_strdup(""));
	printf("\n");
	// ####################################################################################################	
	// ####################################################################################################	
	printf("================================================================================================\n");
	printf("================================ Part 2 - Additional functions =================================\n");
	printf("================================================================================================\n");
	printf("*** ft_substr ***\n");
	printf("%s\n", ft_substr("debora bastos\n", 7, 6));
	printf("%s\n", ft_substr("deb\n", 0, 3));
	printf("%s\n", ft_substr(" ", 0, 0));
	printf("%s\n", ft_substr("debora bastos\n", 10, 2));
	printf("%s\n", ft_substr("lorem ipsum dolor sit amet\n", 400, 20));


	printf("\n");
	printf("================================================================================================\n");
	printf("*** ft_strjoin ***\n");
	printf("%s\n", ft_strjoin("debora", " bastos"));
	printf("%s\n", ft_strjoin("deb", "ora"));
	printf("%s\n", ft_strjoin(" ", "1234"));
	printf("%s\n", ft_strjoin("debora alves pereira ", "bastos"));
	printf("%s\n", ft_strjoin("lorem ipsum", "dolor sit amet"));
	printf("%s\n", ft_strjoin("\0", "dolor sit amet"));
	printf("\n");
	printf("================================================================================================\n");
	printf("*** ft_strtrim ***\n");
	char const *sx = "abab bab ab debora ab bbaa";
	char const *set = "ab";
	printf("%s\n", ft_strtrim(sx, set));
	printf("oi: %s\n", ft_strtrim("          ", " "));
	
	printf("================================================================================================\n");
	printf("*** ft_split ***\n");
	printf("Return (1): {%s}\n", *ft_split("de,ta", '.'));
	printf("------------------------------\n");
    printf("Return (2): {%s, %s} \n", *ft_split("de,ta", ','), *(ft_split("de,ta", ',') + 1));
	printf("------------------------------\n");
    printf("Return: {%s} \n", *ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '));
    printf("Return: {%s} \n", *ft_split("     split       this for   me  !       ", ' '));
	ft_split("          ", ' ');
	printf("------------------------------\n");
    printf("Return (3): {%s, %s, %s} \n", *ft_split("de,ta,la,", ','), *(ft_split("de,ta", ',') + 1), *(ft_split("de,ta", ',') + 2));
	printf("------------------------------\n");
    printf("Return (3): {%s, %s, %s} \n", *ft_split(",,,de,ta,la", ','), *(ft_split("de,ta", ',') + 1), *(ft_split("de,ta", ',') + 2));
	printf("------------------------------\n");
    printf("Return (1): {%s, %s}\n", *ft_split("detala", ','), *(ft_split("detala", ',') + 1));
	printf("------------------------------\n");

	printf("================================================================================================\n");
	printf("*** ft_itoa ***\n");
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(156));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(-2147483648LL));
	printf("================================================================================================\n");
	printf("*** ft_strmapi ***\n");
	// char *b = "override this !";
	// ft_strmapi(b, ft_toupper);
	
	printf("================================================================================================\n");
	printf("*** ft_putchar_fd ***\n");
	ft_putchar_fd('h', 1);
	printf("\n");
	ft_putchar_fd('e', 1);
	printf("\n");
	ft_putchar_fd('y', 1);
	printf("\n");
	printf("================================================================================================\n");
	printf("*** ft_putstr_fd ***\n");
	ft_putstr_fd("Hello", 1);
	printf("\n");
	ft_putstr_fd("Bom dia, turma!!", 1);
	printf("\n");
	printf("================================================================================================\n");
	printf("*** ft_putendl_fd ***\n");
	ft_putendl_fd("Hello", 1);
	ft_putendl_fd("Bom dia, turma!!", 1);
	printf("================================================================================================\n");
	printf("*** ft_putnbr_fd ***\n");
	ft_putnbr_fd(321, 1);
	printf("\n");
	ft_putnbr_fd(-321, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(INT_MIN, 1);
	printf("\n");
	ft_putnbr_fd(INT_MAX, 1);
	printf("\n");
	printf("================================================================================================\n");
	printf("========================================= Bonus Part ===========================================\n");
	printf("================================================================================================\n");
	printf("*** ft_lstnew ***\n");
	t_list	*root;

	root = ft_lstnew("teste 1");
	root->next = ft_lstnew("teste 2");
	root->next->next = ft_lstnew("teste 3");
	printf("%s\n", (char *)root->content);
	printf("%s\n", (char *)root->next->content);
	printf("%s\n", (char *)root->next->next->content);
	printf("================================================================================================\n");
	printf("*** ft_lstadd_front ***\n");
	t_list	*list1 = malloc(sizeof(t_list));
	t_list	*list2 = malloc(sizeof(t_list));

	int		*ptr;
	int		*ptr2;


	ptr = malloc(sizeof(int));
	ptr2 = malloc(sizeof(int));

	*ptr = 42;
	*ptr2 = 12;

	list1->content = ptr;
	list1->next = NULL;
	list2->content = ptr2;
	list2->next = NULL;
	printf("list 1: %d\n", *(int *)(list1->content));
	printf("list 2: %d\n", *(int *)(list2->content));
	ft_lstadd_front(&list1, list2);
	while (list1 != NULL)
	{
		printf("%d\n", *(int *)list1->content);
		list1 = list1->next;
	}
	printf("================================================================================================\n");
	printf("*** ft_lstsize ***\n");
	printf("Expected 3 | result: %d\n", ft_lstsize(root));
	printf("================================================================================================\n");
	printf("*** ft_lstlast ***\n");
	t_list	*last;

	last = ft_lstlast(root);

	printf("Expected teste 3 | result: %s\n", (char *)last->content);
	printf("================================================================================================\n");
	printf("*** ft_lstadd_back ***\n");
	t_list	*list3 = malloc(sizeof(t_list));
	t_list	*list4 = malloc(sizeof(t_list));

	list3->content = "t1";
	list3->next = NULL;
	list4->content = "t2";
	list4->next = NULL;
	// printf("list 3: %s\n",list3->content);
	// printf("list 4: %s\n", list4->content);
	ft_lstadd_back(&list3, list4);
	while (list3 != NULL)
	{
		// printf("%s\n", list3->content);
		list3 = list3->next;
	}
	printf("================================================================================================\n");
	printf("*** ft_lstdelone ***\n");
	ft_lstdelone(list3, free);
	printf("\n");
	printf("================================================================================================\n");
	printf("*** ft_lstclear ***\n");
	printf("\n");
	printf("================================================================================================\n");
	printf("*** ft_lstiter ***\n");
	printf("\n");
	printf("================================================================================================\n");
	printf("*** ft_lstmap ***\n");
	printf("\n");
	printf("================================================================================================\n");
	return (0);
}
