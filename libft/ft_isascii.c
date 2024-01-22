/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:25:35 by agheredi          #+#    #+#             */
/*   Updated: 2024/01/22 18:05:44 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	result;

	result = 0;
	if (c >= 0 && c <= 127)
	{
		result = 1;
	}
	return (result);
}
