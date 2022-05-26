/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:58:15 by dalves-p          #+#    #+#             */
/*   Updated: 2021/06/29 16:12:33 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <stdio.h>
** DESCRIPTION:
**		The ft_putchar()  writes the string s to stream, without its terminating 
**	null byte.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
