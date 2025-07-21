/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:42:37 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/21 12:03:55 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (!*t)
			return (str);
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	texto[] = "Hola mundo, esto es una prueba.";
// 	char	busqueda[] = "esto";
// 	char	*resultado;

// 	resultado = ft_strstr(texto, busqueda);
// 	if (resultado)
// 		printf("Subcadena encontrada: %s\n", resultado);
// 	else
// 		printf("Subcadena no encontrada.\n");
// 	return (0);
// }
