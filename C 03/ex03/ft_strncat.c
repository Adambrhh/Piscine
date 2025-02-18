/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:10:18 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/25 11:38:51 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1])
		count1++;
	while (src[count2] && count2 != nb)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char str1[50] = "Git Push";
// 	char str2[] = "-Up Git Push";
// 	printf("Avant fonction : %s / %s\n", str1, str2);
// 	ft_strncat(str1, str2, 3);
// 	printf("Apres fonction : %s\n", str1);
// 	return (0);
// }