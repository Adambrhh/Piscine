/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:20:03 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/25 11:56:51 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		++count;
	}
	return (0);
}

// int main(void)

// {
// 	char	str1[20] = "Git Push Up";
// 	char	str2[20] = "Git Push Up Pull Up";
// 	int res; 
// 	res = strcmp(str2, str1);
// 	printf("Ma fonction : %s = %s = %d\n", str2, str1, ft_strcmp(str2, str1));
// 	printf("strcmp(str2, str1) = %d\n", res);
// }