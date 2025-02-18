/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:40:29 by abarahho          #+#    #+#             */
/*   Updated: 2024/09/17 09:40:45 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int main()
// {
// 	int div;
// 	int mod;	
// 	int a = 155;
// 	int b = 123;
// 	int *ptr1 = &div;
// 	int *ptr2 = &mod;
// 	ft_div_mod(a, b, ptr1, ptr2);
// 	printf("%d\n", div);
// 	printf("%d\n", mod);
// 	return(0);
// }
