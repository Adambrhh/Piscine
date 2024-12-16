/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:03:32 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/19 09:45:04 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char a[15] = "Git Push-Up!";
// 	char b[15];

// 	printf("a = %s, b = %s\n", a, b);
// 	ft_strcpy(b, a);
// 	printf("a = %s, b = %s\n", b, a);
// 	return(0);
// }
