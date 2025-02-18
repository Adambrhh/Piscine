/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 08:10:53 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/29 17:00:25 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;

	count = 0;
	(void)argc;
	while (argv[0][count])
	{
		write (1, &argv[0][count], 1);
		count++;
	}
	write (1, "\n", 1);
	return (0);
}
