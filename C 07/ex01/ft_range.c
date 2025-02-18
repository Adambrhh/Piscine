/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:35:33 by abarahho          #+#    #+#             */
/*   Updated: 2024/10/01 16:58:51 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// int main(int ac, char **av)
// {
// 	int	i;
// 	int	*range;
// 	int	min;
// 	int	max;
// 	(void)ac;
// 	min = atoi(av[1]);
// 	max = atoi(av[2]);
// 	range = ft_range(min, max);
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