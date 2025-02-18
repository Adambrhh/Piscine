/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:49:17 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/17 09:43:39 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

// #include <stdio.h>

// int	main()
// {
// 	int a;
// 	int b;
// 	a = 155;
// 	b = 123;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return(0);
// }