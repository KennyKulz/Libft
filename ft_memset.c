/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:04:46 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/01 20:04:46 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function sets the first len bytes of the memory area
// pointed to by s to the byte value c.
void    *ft_memset(void *s, int c, size_t len)
{
    size_t  i; //Variable to keep track ot the current position in the memory area.

    i = 0;
    // Loop through each byte in the memory area.
    while (i < len)
    {
        // Set the current type to the specified value c
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    // Return a pointer to the memory area
    return (s);
}
