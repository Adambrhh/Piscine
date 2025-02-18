/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:17:14 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/25 14:03:25 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	b[] = "Git Push-Up!";
// 	printf("%s = %d", b, ft_strlen(b));
// }
