/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:11:07 by abarahho          #+#    #+#             */
/*   Updated: 2024/10/02 14:10:55 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	size = ft_strlen(src);
	dup = malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

// int	main(int ac, char **av)
// {
// 	t_stock_str *tab;
// 	int i;
// 	tab = ft_strs_to_tab(ac - 1, av + 1);
// 	i = 0;
// 	while (i < ac - 1)
// 	{
// 		printf("Chaine originale : %s\n", tab[i].str);
// 		printf("Copie : %s\n", tab[i].copy);
// 		printf("Taille : %d\n", tab[i].size);
// 		printf("\n");
// 		i++;
// 	}
// 	i = 0;
// 	free(tab);
// 	return (0);
// }