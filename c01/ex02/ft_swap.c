/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:02:00 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/20 11:56:00 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main()
// {
// 	int x = 42;
// 	int y = 24;
// 	printf("%d %d\n", x, y);
// 	ft_swap(&x ,&y);
// 	printf("%d %d\n", x, y);
// 	return(0);
// }
