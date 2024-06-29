/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:43:22 by kchikwam          #+#    #+#             */
/*   Updated: 2024/06/29 21:43:22 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to check if the given character is alphanumeric
int ft_isalnum(int c)
{
	 // Check if 'c' is a lowercase letter, uppercase letter, or a digit
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A' )
			|| (c >= '0' && c <= '9'))
		return (1);  // Return 1 if 'c' is alphanumeric
	else
		return (0); // Return 0 if 'c' is not alphanumeric
}
