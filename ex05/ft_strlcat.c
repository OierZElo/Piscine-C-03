/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:05:59 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/21 13:26:44 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	char			*d;

	dest_len = 0;
	src_len = ft_strlen(src);
	d = dest;
	while (*d && dest_len < size)
	{
		d++;
		dest_len++;
	}
	if (dest_len == size)
		return (size + src_len);
	while (*src && (dest_len + 1) < size)
	{
		*d++ = *src++;
		dest_len++;
	}
	*d = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}

// int	main(void)
// {
// 	char			dest[30] = "Hola, ";
// 	char			src[] = "mundo!";
// 	unsigned int	size;
// 	unsigned int	result;

// 	size = 10;
// 	result = ft_strlcat(dest, src, size);
// 	printf("Resultado: %s\n", dest);
// 	printf("Longitud total que debería tener: %u\n", result);
// 	return (0);
// }
