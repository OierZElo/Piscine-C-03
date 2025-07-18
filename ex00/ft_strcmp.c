/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:18:45 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/18 11:00:57 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
// 	printf("Comparando 'hola' y 'hola': %d\n", ft_strcmp("hola", "hola"));
// 	printf("Comparando 'abc' y 'abd': %d\n", ft_strcmp("abc", "abd"));
// 	printf("Comparando 'zebra' y 'apple': %d\n", ft_strcmp("zebra", "apple"));
// 	return (0);
// }
