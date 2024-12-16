/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:52:13 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/19 10:05:41 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)

{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
			str[count] = str[count] + 32;
		count++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)

// {
// 	char	str1[] = "Git Push Up";
// 	printf("avant fonction : %s\n", str1);
// 	printf("apres fonction : %s\n", ft_strlowcase(str1));
// 	return (0);
// }
