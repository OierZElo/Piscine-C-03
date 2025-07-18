/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:05:25 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/18 11:21:07 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

// int	main(void)
// {
// 	char	buffer[50] = "Hola ";

// 	printf("Antes strcat: '%s'\n", buffer);
// 	ft_strcat(buffer, "mundo!");
// 	printf("Después strcat: '%s'\n", buffer);
// 	ft_strcat(buffer, " ¿Qué tal?");
// 	printf("Después strcat otra vez: '%s'\n", buffer);
// 	return (0);
// }
