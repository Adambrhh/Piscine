/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:56:30 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/19 10:04:26 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)

{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)

// {
// 	char	str1[] = "Git Push Up";
// 	printf("avant fonction : %s\n", str1);
// 	printf("apres fonction : %s\n", ft_strupcase(str1));
// 	return (0);
// }
