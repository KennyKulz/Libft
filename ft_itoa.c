/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:56:04 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/03 16:56:04 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Static function to calculate the number of digits in an integer 
static size_t	ft_numlen(int n)
{
	size_t	length; //Variable to store the length of the number
	long	num; // Use long to handle negative numbers and avoid overflow

	length = 0;
	num = n;
	if (n <= 0) // Handle negative numbers and zero
	{
		length = 1; // Account for the negative sign or the single digit zero
		num = -num; // Convert num to a positive number
	}
	while (num != 0) // Loop to count the digits in the number
	{
		num = num / 10;
		length++;
	}
	return (length); // Returnn the length of the number
}

// Static function to convert a long number to a string
static void	ft_convert_to_str(char *str, long num, size_t length)
{
	str[length] = '\0'; // Null-terminate the string
	if (num == 0) // Special case for zero
	{
		str[0] = '0';
		return;
	}
	while (num) // loop to convert each digit to a character
	{
		str[--length] = '0' + (num % 10); // Place the last digit at the current position
		num = num / 10; // Remove the last digit from the number
	}	
}

// Function to convert an integer to a string
char	*ft_itoa(int n)
{
	size_t	length; // Variable to stor the length of the number
	long	num;	// Use long to handle negative numbes and avoid overflow
	int		is_neg;	// Flag to indicate if the number is negative
	char	*str;	// Pointer to store the resulting string

	length = ft_numlen(n);	// Get the length of the number
	num = n;
	is_neg = 0;
	{
		num = -(long)n; // Convert num to a positive number
		is_neg = 1; // Set the negative flat
	}
	str = malloc((length +1) * sizeof(*str)); // Allocate memory for the string (+1 for null-terminator)
	if (str == NULL) // Check if memory allocation failed
		return (NULL);
	if (is_neg) // If the number is negative, add the '-' sign at the beginning
		str[0] = '-';
	ft_convert_to_str(str + is_neg, num, length - is_neg); // Convert number to string
	return (str); // Return the resulting string
}