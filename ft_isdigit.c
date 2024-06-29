/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:20:03 by kchikwam          #+#    #+#             */
/*   Updated: 2024/06/29 21:20:03 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks if the given character is a digit.
int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1); // Return 1 if c is a digit 
	}
	else
	{
		return (0); // Return 0 if c is not a digit
	}
}
