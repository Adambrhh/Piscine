/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:33:00 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/28 16:34:21 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count1;
	int	count2;

	count1 = 1;
	count2 = 0;
	while (count1 < argc)
	{
		while (argv[count1][count2])
		{
			write (1, &argv[count1][count2], 1);
			count2++;
		}
		count2 = 0;
		write (1, "\n", 1);
		count1++;
	}
	return (0);
}
