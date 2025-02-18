/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:30:03 by abarahho          #+#    #+#             */
/*   Updated: 2025/02/18 10:19:43 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

#include <stdio.h>

// int	main(void)
// {
// 	char	a[15] = "Git Push-Up!";
// 	char	b[15];

// 	printf("a = %s, b = %s\n", a, b);
// 	ft_strncpy(b, a, 8);
// 	printf("a = %s, b = %s\n", a, b);
// 	return (0);
// }
