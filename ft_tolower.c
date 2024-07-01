/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:12:52 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/01 17:12:52 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function converts an uppercase letter to a lowercase letter.
// Return: If c is an upercase letter, returns its lowercase equivalent.
// Otherwise, returns c unchanged.
int	tolower(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
