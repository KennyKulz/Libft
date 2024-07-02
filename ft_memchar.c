/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:13:18 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/01 21:13:18 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function searches for the first occurrence of a character c 
// in the first n bytes of the memory area pointed to by s.
void	*ft_memchr(const void *s, int c, size_t n)
{
	ssize_t				i; // Variable to keep track of the current index
	const unsigned char	*ptr; // Pointer to iterate through the memory area

	// Cast teh input pointeer to an unsigned char pointer for byte-wise access
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + 1));
		i++;
	}
	return (NULL);
}
