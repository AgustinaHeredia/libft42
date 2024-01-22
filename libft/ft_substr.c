/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:35:35 by agheredi          #+#    #+#             */
/*   Updated: 2024/01/22 18:10:23 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	i;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		if ((start + len) > ft_strlen(s))
			len = ft_strlen(s) - start;
		sbstr = (char *) malloc(sizeof(char) * len + 1);
		if (sbstr == NULL)
			return (NULL);
		i = 0;
		while (i < len && s[start + i] != '\0')
		{
			sbstr[i] = s[start + i];
			i++;
		}
		sbstr[i] = '\0';
	}
	return (sbstr);
}
