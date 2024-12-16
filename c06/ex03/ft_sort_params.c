/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:55:50 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/28 16:35:59 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write (1, &str[count], 1);
		count++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	count;

	count = 0;
	while (str1[count] || str2[count])
	{
		if (str1[count] != str2[count])
			return (str1[count] - str2[count]);
		count++;
	}
	return (0);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	main(int av, char **ac)
{
	int	i;
	int	j;

	i = 1;
	while (i < av - 1)
	{
		j = 1;
		while (j < av - 1)
		{
			if (ft_strcmp(ac[j], ac[j + 1]) > 0)
				ft_swap(&ac[j], &ac[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < av)
	{
		ft_putstr(ac[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
