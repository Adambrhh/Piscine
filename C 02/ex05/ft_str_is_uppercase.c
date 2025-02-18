/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:06:19 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/19 09:56:01 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90))
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
// 	char	*str1 = "GITPUSHUP";
// 	char	*str2 = "Git Push-Up!";
// 	char	*str3 = "564216812";

// 	res1 = ft_str_is_uppercase(str1);
// 	printf("str1 = %s, res1 = %d\n", str1, res1);
// 	res2 = ft_str_is_uppercase(str2);
// 	printf("str2 = %s, res2 = %d\n", str2, res2);
// 	res3 = ft_str_is_uppercase(str3);
//         printf("str3 = %s, res3 = %d\n", str3, res3);
// 	return (0);
// }
