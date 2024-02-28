/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_only_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedouard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:34:40 by aedouard          #+#    #+#             */
/*   Updated: 2021/09/12 18:34:44 by aedouard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_only_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && !ft_is_space(str[i]))
			return (0);
		i++;
	}
	return (1);
}
