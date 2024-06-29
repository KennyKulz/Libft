/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 22:08:26 by kchikwam          #+#    #+#             */
/*   Updated: 2024/06/29 22:08:26 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	// Check if c is between space (' ') and tilde ('~')
	if (c >= ' ' && c <= '~')
		return (1); // Return 1 if c is a printable character
	else
		return (0); // Return 0 if c is not a printable character
}
