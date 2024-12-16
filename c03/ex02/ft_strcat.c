/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:17:05 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/25 17:03:17 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1])
		count1++;
	while (src[count2])
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
// 	char str2[] = "-Up";
// 	printf("Avant fonction : %s\n", str1);
// 	ft_strcat(str1, str2);
// 	printf("Apres fonction : %s\n", str1);
// 	return (0);
// }