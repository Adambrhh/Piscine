/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:52:24 by abarahho          #+#    #+#             */
/*   Updated: 2024/10/01 16:55:43 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}

// int	main(int ac, char **av)
// {
// 	int	i;
// 	int	*range;
// 	int	min;
// 	int	max;
// 	int	size;

// 	(void)ac;
// 	min = atoi(av[1]);
// 	max = atoi(av[2]);
// 	size = ft_ultimate_range(&range, min, max);
// 	if (range != NULL)
// 	{
// 		i = 0;
// 		while (i < (max - min))
// 		{
// 			printf("%d\n", range[i]);
// 			i++;
// 		}
// 		free(range);
// 	}
// 	return (0);
// }