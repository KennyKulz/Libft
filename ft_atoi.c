/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:29:02 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/02 12:29:02 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function converts a string to an integer.
// This function takes a string as an input and converts it ot an integer. It 
// handles leading whitespace, an optional sign character, and numeric digits.
// The function stops converting upon encountering a non-numeric character.
int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	is_neg;

	i = 0;
	// Skip whitespace characters (space, tab, newline, etc)
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	is_neg = 1;
	// Check if the number is negative
	if (str[i] == '-')
		is_neg = -1;
	// Check the sign character ('-' or '+')
	if (str[i] == '-' || str[i] == '+')
		i++;
	res = 0;
	// Convert the string to an integer
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) +(str[i] - '0');
		i++;
	}
	// Apply the sign to the result
	return (res * is_neg);
}
