/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:34:03 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/21 15:30:17 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 && *s2)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		i++;
	}
	if (i < n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
// int	main(void)
// {
// 	// Casos básicos
// 	printf("Caso 1: %d\n", ft_strncmp("hola", "hola", 4));
// 	printf("Caso 2: %d\n", ft_strncmp("hola", "holi", 3));
// 	printf("Caso 3: %d\n", ft_strncmp("hola", "holi", 4));
// 	printf("Caso 4: %d\n", ft_strncmp("holi", "hola", 4));
// 	printf("Caso 5: %d\n", ft_strncmp("abc", "abcdef", 6));
// 	printf("Caso 6: %d\n", ft_strncmp("abcdef", "abc", 6));
// 	printf("Caso 7: %d\n", ft_strncmp("abc", "xyz", 0));
// 	printf("Caso 8: %d\n", ft_strncmp("ábc", "abc", 3));
// 	printf("Caso 9: %d\n", ft_strncmp("abc", "ábc", 3));
// 	return (0);
// }
