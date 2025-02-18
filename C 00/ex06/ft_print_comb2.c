/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:15:39 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/24 10:27:08 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_print_number(nbr1);
			ft_putchar(' ');
			ft_print_number(nbr2);
			if (!((nbr1 == 98) && (nbr2 == 99)))
			{
				write(1, ", ", 2);
			}
			++nbr2;
		}
		++nbr1;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }