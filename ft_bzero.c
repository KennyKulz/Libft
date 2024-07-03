/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:07:21 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/03 19:07:21 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function sets the firt n bytes of the area strating at s to zero (bytes containing '\0')
// @s: Pointer to the memory to be zeroed.
// @n: Number of bytes to be set to zero.
// This function takes a pointer to a memory area and a size then sets the 
// first n bytes of that memory area too zero. It essentially perfoms a 
// memset with zero as the vale to be set.
void	ft_bzero(void *s, size_t n)
{
	size_t	i;		// Iterator variable for the loop.
	char	*ptr;	// Temporary pointer to traverse the memory area.

	// Cast the void pointer or byte-wise manipulation
	ptr = (char *)s;

	// Initialise the iterator
	i = 0;

	// Loop through the memory area and set eah byte to zero
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
