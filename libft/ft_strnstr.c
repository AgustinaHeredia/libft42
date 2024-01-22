/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:08:07 by agheredi          #+#    #+#             */
/*   Updated: 2024/01/22 18:10:13 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if ((haystack[i + j] == needle[0]))
		{
			while ((haystack[i + j] == needle[j]) && (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *) &haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
