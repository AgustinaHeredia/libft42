/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:36:36 by agheredi          #+#    #+#             */
/*   Updated: 2024/01/22 18:10:30 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
