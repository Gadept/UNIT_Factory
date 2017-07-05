/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolomiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 12:05:44 by pkolomiy          #+#    #+#             */
/*   Updated: 2017/03/18 13:14:18 by pkolomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *str)
{
	while (str && *str)
		write(1, &*str++, 1);
	str ? write(1, "\n", 1) : 0;
}
