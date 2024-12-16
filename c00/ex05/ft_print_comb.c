/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:37:39 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/24 10:25:44 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	h;
	int	t;
	int	u;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				write (1, &h, 1);
				write (1, &t, 1);
				write (1, &u, 1);
				if ((h != '7') || (t != '8') || (u != '9'))
					write(1, ", ", 2);
				u++;
			}
			t++;
		}
		h++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }