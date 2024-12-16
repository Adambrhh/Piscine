/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:09:39 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/19 09:57:05 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)

{
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
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
// 	char	*str1 = "\a \b";
// 	char	*str2 = "Git Push-Up!";
// 	char	*str3 = "564216812";

// 	res1 = ft_str_is_printable(str1);
// 	printf("str1 = %s, res1 = %d\n", str1, res1);
// 	res2 = ft_str_is_printable(str2);
// 	printf("str2 = %s, res2 = %d\n", str2, res2);
// 	res3 = ft_str_is_printable(str3);
//         printf("str3 = %s, res3 = %d\n", str3, res3);
// 	return (0);
// }
