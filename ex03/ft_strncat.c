/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:28:24 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/18 11:41:31 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while ((*src) && (nb > 0))
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (start);
}
// int	main(void)
// {
// 	char	buffer[50] = "Hola ";

// 	printf("Antes de ft_strncat: %s\n", buffer);
// 	ft_strncat(buffer, "mundo cruel", 5); // Solo copia "mundo"
// 	printf("Después de ft_strncat: %s\n", buffer);
// 	ft_strncat(buffer, "!!!", 3); // Copia "!!!"
// 	printf("Después de otro ft_strncat: %s\n", buffer);
// 	return (0);
// }
