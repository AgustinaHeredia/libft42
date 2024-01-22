/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:14:46 by agheredi          #+#    #+#             */
/*   Updated: 2024/01/22 18:05:17 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	result;

	result = 0;
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
	{
		result = 8;
	}
	return (result);
}
