/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:01:53 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/19 09:55:15 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	res1;
// 	int	res2;
// 	int	res3;
// 	char	*str1 = "gitpushup";
// 	char	*str2 = "Git Push-Up!";
// 	char	*str3 = "564216812";

// 	res1 = ft_str_is_lowercase(str1);
// 	printf("str1 = %s, res1 = %d\n", str1, res1);
// 	res2 = ft_str_is_lowercase(str2);
// 	printf("str2 = %s, res2 = %d\n", str2, res2);
// 	res3 = ft_str_is_lowercase(str3);
//         printf("str3 = %s, res3 = %d\n", str3, res3);
// 	return (0);
// }
