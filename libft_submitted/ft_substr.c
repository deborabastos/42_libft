/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:09:31 by dalves-p          #+#    #+#             */
/*   Updated: 2021/06/04 14:59:04 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	size_t	size_malloc;	
	char	*ptr;

	if (!s)
		return (0);
	i = 0;
	len_s = ft_strlen(s);
	size_malloc = 0;
	while (size_malloc < len && size_malloc < len_s)
		size_malloc++;
	ptr = (char *)malloc((size_malloc + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s[i] != '\0' && i < len && start < len_s)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
