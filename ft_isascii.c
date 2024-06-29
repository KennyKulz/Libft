/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 22:05:55 by kchikwam          #+#    #+#             */
/*   Updated: 2024/06/29 22:05:55 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function checks if the given character `c` is a 7-bit unsigned
// 	char value that fits into the ASCII character set, which ranges from
// 	0 to 127 inclusive. It returns 1 if the character is an ASCII character,
// 	and 0 otherwise.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
