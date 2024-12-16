/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:40:51 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/26 14:49:05 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	d;

	d = 2;
	if (nb <= 1)
		return (0);
	while (d * d <= nb)
	{
		if (nb % d == 0)
			nb++;
		d++;
	}
	return (nb);
}

// int main(void)
// {
// 	printf("%d", ft_find_next_prime(18));
// }