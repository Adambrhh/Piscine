/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:57:10 by abarahho          #+#    #+#             */
/*   Updated: 2024/10/17 14:39:02 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

int main(void)
{
    char str[] = "Git Push Up";
    char to_find[] = "Up";

    char *result = ft_strstr(str, to_find);
	char *res;
	res = strstr(str, to_find);
    printf("%s & %s\n", str, to_find);
	printf("Sous chaine trouvee : %s\n", result);
	printf("Resltat strstr : %s", res);
    return 0;
}