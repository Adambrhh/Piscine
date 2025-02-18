/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:32:30 by abarahho          #+#    #+#             */
/*   Updated: 2024/10/01 19:21:45 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	count1;
	int	count2;

	count1 = ft_strlen(dest);
	count2 = 0;
	while (src[count2])
	{
		dest[count1 + count2] = src[count2];
		count2++;
	}
	dest[count1 + count2] = '\0';
	return (dest);
}

int	total_len(char **strs, int size, char *sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total_len += (size - 1) * ft_strlen(sep);
	return (total_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	i = 0;
	if (size == 0)
	{
		res = malloc(1);
		if (res)
		{
			*res = '\0';
			return (res);
		}
	}
	res = malloc(sizeof(char) * total_len(strs, size, sep));
	if (!res)
		return (NULL);
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

// int	main(int ac, char **av)
// {
// 	char	*result;
// 	result = ft_strjoin(ac - 1, av + 1, ", ");
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
