/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:49:34 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/26 14:49:29 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	d;

	d = 2;
	if (nb <= 1)
		return (0);
	while (d * d <= nb)
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}

// int main(void)
// {
// 	printf("Nombre premier ? 1 FAUX / 0 VRAI\n%d", ft_is_prime(20));
// }