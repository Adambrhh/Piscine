/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:07:07 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/26 09:59:13 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		nb = 1;
	else
	{
		nb = 1;
		while (i != 1)
		{
			nb = (nb * i);
			i--;
		}
	}
	return (nb);
}

// int main()
// {
// 	printf("Factoriel de 5 = %d", ft_iterative_factorial(5));
// }