/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:12:23 by abarahho          #+#    #+#             */
/*   Updated: 2024/10/01 19:18:24 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

// int main(int ac, char **av)
// {
// 	int i;
// 	char	*dup; 
// 	i = 1;
// 	while (i < ac)
// 	{
// 		dup = my_strdup(av[i]);
// 		if (dup != NULL)
// 		{
// 			printf("%s %s", av[i], dup);
// 			free (dup);
// 		}
// 		i++;
// 	}
// }