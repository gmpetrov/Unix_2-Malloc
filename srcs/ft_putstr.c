/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:32:59 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/14 13:01:39 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void		ft_putstr(char *str)
{
	if (str)
		write(1, str, ft_strlen(str));
	else
		write(1, "(null)", 6);
}