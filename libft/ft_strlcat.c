/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzholama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 08:43:14 by rzholama          #+#    #+#             */
/*   Updated: 2025/06/17 08:44:12 by rzholama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dst_size;
	size_t		src_size;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dst_size >= size)
		return (size + src_size);
	while (((dst_size + i + 1) < size) && src[i] != '\0')
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char d[30] = "Hello,";
	char s[30] = " World! Here we go again!";
	size_t d_size = 32;
	printf("%ld\n", ft_strlcat(d, s, d_size));
	printf("%s\n", d);
}
*/
