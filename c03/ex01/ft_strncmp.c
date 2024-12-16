/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:39:14 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/25 13:47:52 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] || s2[count]) && count != n)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		++count;
	}
	return (0);
}

// int main(void)
// {
//     char str1[20] = "Git Push Up";
//     char str2[30] = "Git Push Up Pull Up";
//     int res; 
//     res = ft_strncmp(str1, str2, 15);
//     printf("Ma fonction : %s = %s = %d\n", str1, str2, res);

//     int res_std = strncmp(str1, str2, 15);
//     printf("strncmp(str1, str2, 15) = %d\n", res_std);
//     return 0;
// }