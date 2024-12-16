/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:43:32 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/19 10:03:00 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)

{
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// // int	main(void)
// // {
// // 	int	res1;
// // 	int	res2;
// // 	int	res3;
// // 	char	*str1 = "GitPushUp";
// // 	char	*str2 = "Git Push-Up!";
// // 	char	*str3 = "564216812";

// // 	res1 = ft_str_is_numeric(str1);
// // 	printf("str1 = %s, res1 = %d\n", str1, res1);
// // 	res2 = ft_str_is_numeric(str2);
// // 	printf("str2 = %s, res2 = %d\n", str2, res2);
// // 	res3 = ft_str_is_numeric(str3);
// //         printf("str3 = %s, res3 = %d\n", str3, res3);
// // 	return (0);
// // }
