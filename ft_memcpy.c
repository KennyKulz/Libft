/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:08:40 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/03 18:08:40 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function copies n bytes from memory area src to memory area dest.
// If dest and src are NULL, returns NULL.
// If n is 0, returns dest.
//
// @param dest	- The destination memory area.
// @param src	- The source memory area.
// @param n		- The number of bytes to copy.
// @return		- The pointer to the destination memory area.
void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;		// Index for iteration.
	unsigned char	*d;		// Cast dest to nsigned char pointer.
	unsigned char	*s;		// Cast src to unsigned char pointer.

	// Check if both destination and sourse are NULL.
	if (dest == NULL && src == NULL)
		return (NULL);
	
	// If n is 0, no need to copy anything, just return dest.
	if (n == 0)
		return (dest);
	
	// Cast destination and source pointers to unsigned char pointers.
	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	i = 0; // Initialize the index
	// Loop to copy n bytes from src to dest
	while (i < n)
	{
		d[i] = s[i]; // Copy each byte
		i++;
	}
	// Return the destination pointer
	return (dest);
}