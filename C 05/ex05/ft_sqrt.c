/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:34:04 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/26 12:26:50 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	j;

	j = 1;
	while (j * j <= nb)
	{
		if (j * j == nb)
			return (j);
		j++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("Racine carree de 9 = %d", ft_sqrt(9));
// }